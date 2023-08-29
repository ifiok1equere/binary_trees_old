#include "binary_trees.h"

/**
 * binary_tree_depth - function measures the depth of a tree node
 * @tree: pointer to the entire tree
 *
 * Return: depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *ptr;

	if (!tree)
		return (0);

	if (!tree->parent)
		return (0);

	ptr = tree;

	while (ptr->parent != NULL)
	{
		ptr = ptr->parent;
		depth++;
	}
	return (depth);
}
