/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include <ncurses.h>
#include <unistd.h>
#include <curses.h>
#include "my.h"
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char **move_up_p2(char **my_map, int line, int chars)
{
    if (line != 1) {
        if (my_map[line - 2][chars] != '#' && my_map[line - 1][chars] == 'X'
        && my_map[line - 2][chars] == 'O' && line != 1) {
            my_map[line][chars] = ' ';
            my_map[line - 1][chars] = 'P';
            my_map[line - 2][chars] = 'X';
        }
    }
    return (my_map);
}

char **move_up(char **my_map, int line, int chars)
{
    if (my_map[line - 1][chars] != '#' && my_map[line - 1][chars] != 'X') {
        my_map[line][chars] = ' ';
        my_map[line - 1][chars] = 'P';
    }
    if (line != 1) {
        if (my_map[line - 2][chars] != '#' && my_map[line - 1][chars] == 'X'
        && my_map[line - 2][chars] == ' ') {
            my_map[line][chars] = ' ';
            my_map[line - 1][chars] = 'P';
            my_map[line - 2][chars] = 'X';
        }
    }
    move_up_p2(my_map, line, chars);
    return (my_map);
}