#include "binary_trees.h"

/**
 * array_to_heap - This is going to build a Max Binary Heap tree from an array
 *
 * @array: A pointer to the first element of the array to be converted
 * @size: number of elements in the array
 * Return: pointer to the root node of the created Binary Heap,
 * or NULL on failure
 */

heap_t *array_to_heap(int *array, size_t size)
{
	size_t i;
	heap_t *root = NULL;

	if (!array)
		return (NULL);

	root = heap_insert(&root, array[0]);
	for (i = 1; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}
