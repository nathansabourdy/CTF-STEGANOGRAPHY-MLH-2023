/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/

#include "my.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

void my_function(int i, char *str, va_list *ap)
{
    void (*func[3]) (va_list *ap) = {my_printfs, my_printfd, my_printfc};

    if (str[i] == '%') {
        switch (str[i+1]) {
            case 'd':
                (*func[1]) (ap);
                break;
            case 'i':
                (*func[1]) (ap);
                break;
            case 's':
                (*func[0]) (ap);
                break;
            case 'c':
                (*func[2]) (ap);
                break;
        }
    }
}

void my_printf(char *str, ...)
{
    va_list ap;
    int i = 0;

    va_start(ap, str);
    while (str[i] != '\0') {
        my_function(i, str, &ap);
        if (str[i] != '%' && str[i-1] != '%')
            write(1, &str[i], 1);
        i++;
    }
    va_end(ap);
}