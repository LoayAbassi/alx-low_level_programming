#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * binary search function is stored here
 * @array: a pointer to 1st element in array
 * @size: number of elements in array
 * @value: we're looking for it
 *
 * Return: if value not present -1,
 *         else index of value in array
 *
 * Description: prints values until array
 *              ends or value found
 */

int binary_search(int *array, int size, int value)
{
    int left = 0, right = size - 1, mid;

    if (array == NULL)
    {
        return -1;
    }

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (array[mid] == value)
        {
            return mid;
        }

        if (array[mid] < value)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}
