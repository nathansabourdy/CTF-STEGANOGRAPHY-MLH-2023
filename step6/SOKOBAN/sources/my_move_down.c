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

char **move_down_p2(char **my_map, int line, int chars, int height)
{
    if (line != height - 2) {
        if (my_map[line + 2][chars] != '#' && my_map[line + 1][chars] == 'X'
        && my_map[line + 2][chars] == 'O') {
            my_map[line][chars] = ' ';
            my_map[line + 1][chars] = 'P';
            my_map[line + 2][chars] = 'X';
        }
    }
    return (my_map);
}

char **move_down(char **my_map, int line, int chars, int height)
{
    if (my_map[line + 1][chars] != '#' && my_map[line + 1][chars] != 'X') {
        my_map[line][chars] = ' ';
        my_map[line + 1][chars] = 'P';
    }
    if (line != height - 2) {
        if (my_map[line + 2][chars] != '#' && my_map[line + 1][chars] == 'X'
        && my_map[line + 2][chars] == ' ') {
            my_map[line][chars] = ' ';
            my_map[line + 1][chars] = 'P';
            my_map[line + 2][chars] = 'X';
        }
    }
    move_down_p2(my_map, line, chars, height);
    return (my_map);
}