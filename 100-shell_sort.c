#include "sort.h"
/**
 * get_pro_gap - to get the proper value of gap as
 * next gab = gab * 3 + 1 and min back gab = (gab - 1) / 3
 * @size: is the size of the given array
 * Return: the proper value of the array
*/
size_t get_pro_gap(size_t size)
{
	size_t z = 1, n;

	while (z < size)
	z = z * 3 + 1;
	n = (z - 1) / 3;
	return (n);
}
/**
 * shell_sort - shel sort array
 * @array: is the given array
 * @size: is the siz of the array
 * Return: void
*/
void shell_sort(int *array, size_t size)
{
	size_t gap, a, b;
	int temp;

	if (!array || !size)
		return;
	for (gap = get_pro_gap(size); gap > 0; gap = (gap - 1) / 3)
	{
		for (a = gap; a < size; a++)
		{
			temp = array[a];
			for (b = a; b > gap - 1 && array[b - gap] > temp; b -= gap)
			{
				array[b] = array[b - gap];
			}
			array[b] = temp;
		}
		print_array(array, size);
	}
}
