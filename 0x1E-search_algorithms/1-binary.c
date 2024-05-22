#include "search_algos.h"

/**
 * printarray - prints an array of integers
 * @array: pointer to the first element of the array to print
 * @left: index of the first element to print
 * @right: index of the last element to print
 */

void printarray(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, middle, right = size - 1;

	while (left <= right && array)
	{
		middle = (left + right) / 2;
		printarray(array, left, right);
		if (value == array[middle])
			return (middle);

		else if (value < array[middle])
			right = middle - 1;

		else if (value > array[middle])
			left = middle + 1;
	}
	return (-1);
}
