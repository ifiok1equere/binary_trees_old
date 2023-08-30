#include "binary_trees.h"

/**
 * binary_tree_leaves - function counts the leaves of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: number of leaves in the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (leaves);
}
