#include "binary_trees.h"

/**
 * binary_tree_size - Evaluates the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: The size of the tree, otherwise NULL if tree is NULL
 * Description: Size is the number of nodes in a tree with a given node
 * as the root
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size = 1;

	if (tree == NULL)
		return (0);

	tree_size += binary_tree_size(tree->left);
	tree_size += binary_tree_size(tree->right);

	return (tree_size);
}
