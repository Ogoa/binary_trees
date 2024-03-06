#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaf nodes in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 *
 * Return: 0 if tree is NULL
 * Description: A leaf node is a node that does not have any child nodes
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leaf_nodes += binary_tree_leaves(tree->left);
	leaf_nodes += binary_tree_leaves(tree->right);

	return (leaf_nodes);
}
