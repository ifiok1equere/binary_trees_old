#include "binary_trees.h"

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int left_complete, right_complete, is_leaf;
	if (tree == NULL)
		return (0);

	left_complete = binary_tree_is_complete(tree->left);
	right_complete = binary_tree_is_complete(tree->right);

	is_leaf = (tree->left == NULL && tree->right == NULL);

	return (is_leaf || (left_complete && right_complete && (tree->left == NULL || tree->right == NULL)));
}
