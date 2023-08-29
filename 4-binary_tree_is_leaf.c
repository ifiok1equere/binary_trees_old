#include "binary_trees.h"

/**
 * binary_tree_is_leaf - functon checks if a node is a leaf
 * @node: pointer to node to be checked
 *
 * Return: 1 for leaf, 0 otherwise/NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
