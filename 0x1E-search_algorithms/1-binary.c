#include "search_algos.h"
/**
 * print_array - Write a funct that searches for a value in a sorted array of int
 * @array: array
 * @first: first element of the array
 * @last: last element of the array
 */
void print_array(int *array, size_t first, size_t last)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = first; i <= last; i++)
	{
		if (i != last)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
 * binary_search -  function that searches for a value in a sorted array of int
 * @array: array
 * @size: size of array
 * @value: value to search for
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t index = 0;
	size_t first = 0;
	size_t last = size - 1;

	if (!array)
		return (-1);

	while (first <= last)
	{
		print_array(array, first, last);
		index = (first + last) / 2;
		if (array[index] == value)
			return (index);
		else if (array[index] > value)
			last = index - 1;
		else
			first = index + 1;
	}
	return (-1);
}
