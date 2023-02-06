/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/

#include <stdarg.h>
#include "my.h"

void my_printfs(va_list *ap)
{
    char *str = va_arg(*ap, char *);

    my_putstr(str);
}

void my_printfd(va_list *ap)
{
    int integer = va_arg(*ap, int);

    my_put_nbr(integer);
}

void my_printfc(va_list *ap)
{
    char c = va_arg(*ap, int);

    my_putchar(c);
}