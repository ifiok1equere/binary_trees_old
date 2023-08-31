#include "binary_trees.h"

/**
 * binary_tree_sibling - function returns sibling of a node in a binary tree
 * @node: node whose sibling is to be found.
 *
 * Return: pointer to node's sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);
	else
		return (node->parent->right);
}
