#include "binary_trees.h"

/**
 * binary_tree_insert_right - function inserts a node as a right child
 * @parent: pointer to the node to insert the right-child in
 * @value: data to store in the new node
 *
 * Return: return a pointer to the created node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_new_node;

	if (parent == NULL)
		return (NULL);

	right_new_node = binary_tree_node(parent, value);
	if (parent->right == NULL)
		parent->right = right_new_node;
	else
	{
		right_new_node->right = parent->right;
		right_new_node->right->parent = right_new_node;
		parent->right = right_new_node;
	}

	return (right_new_node);
}
