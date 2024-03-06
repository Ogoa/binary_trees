#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return; /* Do nothing if the tree is empty */

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
