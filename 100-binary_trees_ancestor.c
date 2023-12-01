#include "binary_trees.h"

/**
 * binary_trees_ancestor
 * @first: first node
 * @second: second node
 *
 * Return: pointer to common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second) {
	if (first == NULL || second == NULL) {
		return NULL;
	}

	// If the first node is equal to the second node, then the first node is the lowest common ancestor.
	if (first == second) {
		return (binary_tree_t *)first;
	}

	// Recursively find the lowest common ancestor of the first node's left subtree and the second node.
	binary_tree_t *left_ancestor = binary_trees_ancestor(first->left, second);

	// Recursively find the lowest common ancestor of the first node's right subtree and the second node.
	binary_tree_t *right_ancestor = binary_trees_ancestor(first->right, second);

	// If the left ancestor is not NULL and the right ancestor is not NULL, then the first node is the lowest common ancestor.
	if (left_ancestor != NULL && right_ancestor != NULL) {
		return (binary_tree_t *)first;
	}

	// Otherwise, return the non-NULL ancestor.
	return left_ancestor != NULL ? left_ancestor : right_ancestor;
}
/* Function to find the lowest common ancestor */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second) {
    if (first == NULL || second == NULL)
        return NULL;

    /* Base case: If either of the nodes is found, return the node itself */
    if (first == second)
        return (binary_tree_t *)first;

    /* Recursively search for the nodes in the left and right subtrees */
    binary_tree_t *left_result = binary_trees_ancestor(first->left, second);
    binary_tree_t *right_result = binary_trees_ancestor(first->right, second);

    /* If both nodes are found in different subtrees, the current node is the LCA */
    if (left_result != NULL && right_result != NULL)
        return (binary_tree_t *)first;

    /* If both nodes are found in the same subtree, return the result from that subtree */
    return (left_result != NULL) ? left_result : right_result;
}

