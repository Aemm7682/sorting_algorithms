#include "sort.h"
/**
 * bubble_sort - to sort by using bubble
 * @size: is the size of the array
 * @array: is the array it self
 * Return: void
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, z;
	int temp;

	if (!array || !size)
		return;
	z = 0;
	while (z < size)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
		z++;
	}
}
