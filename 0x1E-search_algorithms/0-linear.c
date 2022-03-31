#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an
 * array of integers using the Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index OR -1
 **/
int linear_search(int *array, size_t size, int value)
{
size_t n = 0;

if (array == NULL)
return (-1);
for (n = 0; n <= size; n++)
{
printf("Value checked array[%ld] = [%d]\n", n, array[n]);
if (value == array[n])
return (n);
}
return (-1);
}
