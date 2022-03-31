
#include <stdio.h>
#include "search_algos.h"

/**
* prar - prints array
* @array: array
* @start: start point
* @end: ending point
* Return: nothing
**/
void prar(int *array, size_t start, size_t end)
{

unsigned int i;

printf("Searching in array: ");
for (i = start; i < end; i++)
{
printf("%d, ", array[i]);
}
printf("%d\n", array[end]);
}

/**
* binary_search - a function that searches for a value in a
*sorted array of integers using the Binary search algorithm
* @array: pointer to the first element of the array
* @size: is the number of elements in array
* @value: value to search for
* Return: index OR -1
**/
int binary_search(int *array, size_t size, int value)
{
size_t left = 0;
size_t right = size - 1;
int mid;

if (array == NULL)
return (-1);
if (size == 1)
{
return (array[left]);
}

while (left <= right)
{
prar(array, left, right);
mid = ((left + right) / 2);
if (value == array[mid])
{
return (mid);
}

else if (value > array[mid])
{
left = mid + 1;
}
else if (value < array[mid])
{
right = mid - 1;
}
}
return (-1);
}
