#include "binary_trees.h"

/**
 * binary_tree_height - function measures the height of a tree
 * @tree: pointer to the entire tree
 *
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (tree == NULL)
		return (0);

	left_count = binary_tree_height(tree->left);
	right_count = binary_tree_height(tree->right);

	if (left_count >= right_count)
		return (left_count + 1);
	else
		return (right_count + 1);
}
