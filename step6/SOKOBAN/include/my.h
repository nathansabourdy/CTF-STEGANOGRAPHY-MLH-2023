/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/

#include <stdarg.h>
#include <ncurses.h>
#include <unistd.h>
#include <curses.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#ifndef PRINTF_H
#define PRINTF_H

typedef struct everything
{
    int my_key;
    int height2;
    int ac2;
    char **av2;
    char **test;
    WINDOW *ok;
}every;
int my_getnbr(char *str);
int my_intlen(int *array);
int my_isneg(int n);
void my_printf(char *str, ...);
void my_printfs(va_list *ap);
void my_printfd(va_list *ap);
void my_printfc(va_list *ap);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_revstr(char *str);
char *my_strcapitalize(char *str);
int my_strcmp(char *s1, char *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char *str);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
char **print_arg(char **arg);
char **my_str_to_word_array(char *str);
char *my_home(char **env);
char *my_concat_string(char *str1, char *str2);
void remove_n(char *str);
char **print_env(char **env);
void fonction_ctrl_c();
void print_prompt1(void);
int my_error_handling(int ac, char **av);
int count_o(char **copy_o);
char **move_up_p2(char **my_map, int line, int chars);
char **move_up(char **my_map, int line, int chars);
char **move_right_p2(char **my_map, int line, int chars);
char **move_right(char **my_map, int line, int chars);
char **move_down_p2(char **my_map, int line, int chars, int height);
char **move_down(char **my_map, int line, int chars, int height);
char **move_left_p2(char **my_map, int line, int chars);
char **move_left(char **my_map, int line, int chars);
char **move_p(char **my_map, int indicator, int height);
char **contain_if(char **my_map, int my_key, int height);
int check_map(char **containif, char **finalmap, int o, char **copy_o);
int init_screen(char **my_map, char **copy_my_map, char **copy_o, every *all);
char *contain_map(char **av);
int my_height(char *buffer);
char **malloc_my_map(char *buffer, int height);
char **my_map_to_win(char **my_map, int height);
char **my_map_for_o(char **my_map, int height);
int main(int ac, char **av);
int my_complete_prog(int ac, char **av);
void print_last(char **my_map);

#endif