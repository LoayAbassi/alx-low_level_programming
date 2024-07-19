#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear search function is stored here
 * @array: a pointer to 1st element in array
 * @size: number of elements in array
 * @value: we're looking for
 *
 * Return: if value not present -1,
 *         else index of value in array
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;
    if (array == NULL)
    {
        return (-1);
    }
    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            return (i);
        }
    }
    return (-1);
}