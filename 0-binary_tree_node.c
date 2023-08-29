#include "binary_trees.h"

/**
 * binary_tree_node - function creates a node
 * parent: pointer to the parent binary tree node
 * value: data part of node
 *
 * Return: return a pointer to the created binary tree node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	if (parent == NULL)
		new_node->parent = NULL;
	else
		new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
