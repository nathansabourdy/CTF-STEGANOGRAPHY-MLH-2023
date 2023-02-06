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

char **move_right_p2(char **my_map, int line, int chars)
{
    if (my_map[line][chars + 2] != '#' && my_map[line][chars + 1] == 'X'
    && my_map[line][chars + 2] == 'O') {
        my_map[line][chars] = ' ';
        my_map[line][chars + 1] = 'P';
        my_map[line][chars + 2] = 'X';
    }
    return (my_map);
}

char **move_right(char **my_map, int line, int chars)
{
    if (my_map[line][chars + 1] != '#' && my_map[line][chars + 1] != 'X') {
        my_map[line][chars] = ' ';
        my_map[line][chars + 1] = 'P';
    }
    if (my_map[line][chars + 2] != '#' && my_map[line][chars + 1] == 'X'
    && my_map[line][chars + 2] == ' ') {
        my_map[line][chars] = ' ';
        my_map[line][chars + 1] = 'P';
        my_map[line][chars + 2] = 'X';
    }
    move_right_p2(my_map, line, chars);
    return (my_map);
}