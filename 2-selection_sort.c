#include "sort.h"
/**
 * selection_sort - sorting by selection technique
 * @array: the given array
 * @size: is the size of array
 * Return: void
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, z;
	int temp;

	if (!array || !size)
		return;
	for (i = 0; i < size - 1; i++)
	{
		z = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[z] > array[j])
				z = j;
		}
		if (z != i)
		{
			temp = array[i];
			array[i] = array[z];
			array[z] = temp;
			print_array(array, size);
		}
	}
}
