#include "binary_trees.h"

size_t check_subtree(const binary_tree_t *node);

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Nothing
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	left = check_subtree(tree->left);
	right = check_subtree(tree->right);

	return ((left > right) ? left : right);
}

/**
 * check_subtree - Helper function to evaluate the number of
 * levels in a subtree
 * @node: Pointer to the root node of the subtree
 *
 * Return: The number of levels in the subtree
 */
size_t check_subtree(const binary_tree_t *node)
{
	size_t left = 1;
	size_t right = 1;

	if (node == NULL)
		return (0);

	left += check_subtree(node->left);
	right += check_subtree(node->right);

	return ((left > right) ? left : right);
}
