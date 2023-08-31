#include "binary_trees.h"

/**
 * binary_tree_uncle -  function returns the uncle of a node in a binary tree
 * @node: node whose uncle is to be found.
 *
 * Return: pointer to node's uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
}
