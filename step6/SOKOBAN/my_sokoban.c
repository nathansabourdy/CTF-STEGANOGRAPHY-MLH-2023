/*
** EPITECH PROJECT, 2021
** File description:
** 
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


int my_complete_prog(int ac, char **av)
{
    every *all = malloc(sizeof(all));
    char *str = malloc(sizeof(char) * 64);
    str[63] = '\0';
    char *strs = "#######\n###   #\n#OPX X#\n### XO#\n# # XO#\n#OX  O#\n#######\n";

    int height = 6;
    all->height2 = height;
    all->ac2 = ac;
    all->av2 = av;
    char **my_map = malloc_my_map(strs, height);

    char **copy_o = my_map_for_o(my_map, height);
    char **copy_my_map = my_map_to_win(my_map, height);
    all->ok = initscr();
    init_screen(my_map, copy_my_map, copy_o, all);
    return (0);
}

int main(int ac, char **av)
{
    if (my_error_handling(ac, av) == 84)
        return (84);
    my_complete_prog(ac, av);
    return (0);
}