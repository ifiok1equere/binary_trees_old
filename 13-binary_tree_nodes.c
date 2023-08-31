#include "binary_trees.h"

/**
 * binary_tree_nodes - function counts nodes with @ least 1 child
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: number of nodes or NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (tree == NULL)
		return (0);

	left_count = binary_tree_nodes(tree->left);
	right_count = binary_tree_nodes(tree->left);

	if (tree->left != NULL || tree->right != NULL)
		return (left_count + right_count + 1);
	return (left_count + right_count);
}
