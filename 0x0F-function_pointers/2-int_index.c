#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: name
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: return index of integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if ((array != NULL) && (cmp != NULL))
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) > 0)
			{
<<<<<<< HEAD
				return(i);
=======
				return (i);
>>>>>>> 383a4b52a408918cb95413e61757e7217a899486
			}
		}
	}
	return (-1);
}
