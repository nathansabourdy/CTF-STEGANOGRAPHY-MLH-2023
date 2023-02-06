/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/

#include <stdarg.h>

#ifndef PRINTF_H
#define PRINTF_H

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
void my_sort_int_array(int *tab, int size);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char *s1, char *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char *str);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);

#endif
