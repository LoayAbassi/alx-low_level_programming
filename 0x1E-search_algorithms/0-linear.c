#include 'search_algos.h'
/*
linear search function is stored here
*/
int linear_search(int *array, size_t size, int value){
    int i = 0;
    while (i < size){
        if (array[i] == value)
        {
            return i;
        }
        i++;
    }
    return -1;
}