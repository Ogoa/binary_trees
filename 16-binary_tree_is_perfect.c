#include "binary_trees.h"

size_t check_subtree(binary_tree_t *tree);
size_t check_tree_height(binary_tree_t *tree);

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 * Description: A perfect tree is one in which every node has two child
 * nodes and the leaf nodes are all on the same level
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int child_nodes = 0;

	if (tree == NULL)
		return (0);

	/* Check if each sub-tree has equal depth */
	if (check_tree_height(tree->left) != check_tree_height(tree->right))
		return (0);

	/* Check if the node has 2 children or none */
	child_nodes += binary_tree_is_perfect(tree->left);
	child_nodes += binary_tree_is_perfect(tree->right);

	return ((child_nodes % 2 == 0) ? 1 : 0);
}

/**
 * check_tree_height - Evaluates the height of a tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Height of the tree, otherwise 0 if tree is NULL
 */
size_t check_tree_height(binary_tree_t *tree)
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
 * check_subtree - Helper function to check the depth of each
 * sub_tree
 * @tree: Pointer to the root of the subtree to measure
 *
 * Return: 0 if tree is NULL
 */
size_t check_subtree(binary_tree_t *tree)
{
	size_t left = 1;
	size_t right = 1;

	if (tree == NULL)
		return (0);

	left += check_subtree(tree->left);
	right += check_subtree(tree->right);

	return ((left > right) ? left : right);
}
