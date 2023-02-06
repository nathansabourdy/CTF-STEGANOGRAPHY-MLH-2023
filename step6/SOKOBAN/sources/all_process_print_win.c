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

char **move_p(char **my_map, int indicator, int height)
{
    int line = 0;
    int chars = 0;
    for (int i = 0; my_map[i] != NULL; i++) {
        for (int j = 0; my_map[i][j] != '\0'; j++) {
            if (my_map[i][j] == 'P') {
                line = i;
                chars = j;
            }
        }
    }
    if (indicator == 1)
        return (move_up(my_map, line, chars));
    if (indicator == 3)
        return (move_right(my_map, line, chars));
    if (indicator == 2)
        return (move_down(my_map, line, chars, height));
    if (indicator == 4)
        return (move_left(my_map, line, chars));
}

char **contain_if(char **my_map, int my_key, int height)
{
    if (my_key == KEY_UP)
        return (move_p(my_map, 1, height));
    if (my_key == KEY_RIGHT)
        return (move_p(my_map, 3, height));
    if (my_key == KEY_DOWN)
        return (move_p(my_map, 2, height));
    if (my_key == KEY_LEFT)
        return (move_p(my_map, 4, height));
}

int check_map(char **containif, char **finalmap, int o, char **copy_o)
{
    int a = 0;
    int k = 0;
    int l = 0;

    for (int i = 0; containif[i] != NULL; i++) {
        for (int j = 0; containif[i][j] != '\0'; j++) {
            if (containif[i][j] == 'X' && finalmap[i][j] == 'X') {
                a++;
            }
        }
    }
    for (k = 0; copy_o[k] != NULL; k++) {
        for (l = 0; copy_o[k][l] != '\0'; l++) {
            if (copy_o[k][l] == 'O' && containif[k][l] == ' ')
                containif[k][l] = 'O';
        }
    }
    if (a == o) {
        return (1);
    }
    else {
        return (0);
    }
}

void print_last(char **my_map)
{
    for (int i = 0; my_map[i] != NULL; i++)
        mvprintw(i, 0, my_map[i]);
    refresh();
    usleep(100000);
}

int init_screen(char **my_map, char **copy_my_map, char **copy_o, every *all)
{
    keypad(all->ok, TRUE);
    noecho();
    curs_set(FALSE);
    // for (int i = 0; my_map[i] != NULL; i++) {
    //     // for (int j = 0; my_map[i][j] != '\0'; j++) {}
    //     printf("%s\n",my_map[i]);
    // }
    // printf("SAUT\n");
    // exit(10);
    // for (int i = 0; my_map[i] != NULL; i++)
    //     mvprintw(i, 0, my_map[i]);
    // refresh();
    // exit(0);
    while (1) {
        for (int i = 0; my_map[i] != NULL; i++)
            mvprintw(i, 0, my_map[i]);
        all->my_key = getch();
        if (all->my_key == ' ') {
            main(all->ac2, all->av2);
            return (0);
        }
        if (check_map(contain_if(my_map, all->my_key, all->height2),
        copy_my_map, count_o(copy_o), copy_o) == 1) {
            print_last(my_map);
            mvprintw(0, 0, "La première partie du mot de passe : MLH{Epitech_UI88\n");
            refresh();
            exit(0);
            endwin();
            return (0);
        }
        refresh();
    }
    endwin();
}