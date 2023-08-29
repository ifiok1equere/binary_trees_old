#include "binary_trees.h"

/**
 * binary_tree_insert_left - function creates a node
 * @parent: pointer to the node to insert the left-child in
 * @value: data to store in the new node
 *
 * Return: return a pointer to the created node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_new_node;

	if (parent == NULL)
		return (NULL);

	left_new_node = binary_tree_node(parent, value);
	if (parent->left == NULL)
		parent->left = left_new_node;
	else
	{
		left_new_node->left = parent->left;
		left_new_node->left->parent = left_new_node;
		parent->left = left_new_node;
	}

	return (left_new_node);
}
