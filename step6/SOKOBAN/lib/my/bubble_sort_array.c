/*
** EPITECH PROJECT, 2021
** BSQ PROJECT
** File description:
** Special BSQ
*/

#include "my.h"

int bubble_sort_array(int a, int b, int c, int size)
{
    int i = 0;
    int j = 0;
    int array[3] = {a, b, c};

    while (j < (size - 1)) {
        j = (size - 1);
        i = 0;
        while (i < (size - 1)) {
            if (array[i] > array[i+1]) {
                my_swap(&array[i], &array[i+1]);
                j = 0;
            }
            i++;
        }
    }
    return (array[0]);
}
