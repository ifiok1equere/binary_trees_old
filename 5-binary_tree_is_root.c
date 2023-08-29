#include "binary_trees.h"

/**
 * int binary_tree_is_root - function checks if a node is root
 * @node: pointer to node to be checked
 *
 * Return: 1 for root, 0 otherwise/NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
