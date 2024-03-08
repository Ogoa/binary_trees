#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 0 if the tree is NULL
 * Description: A tree is full if all nodes in the tree have
 * either 0 or 2 child nodes
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int child_nodes = 0;

	if (tree == NULL)
		return (0);

	child_nodes += binary_tree_is_full(tree->left);
	child_nodes += binary_tree_is_full(tree->right);

	return ((child_nodes % 2 == 0) ? 1 : 0);
}
