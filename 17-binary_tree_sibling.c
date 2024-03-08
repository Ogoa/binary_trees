#include "binary_trees.h"

/**
 * binary_tree_sibling - Fins the sibling of a node
 * @node: Pointer to the node whose sibling is to be found
 *
 * Return: Pointer to the sibling node, otherwise NUll if node
 * is NULL or parent is NULL
 * Description: A sibling node is one sharing a parent with a given node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	if (parent->left && parent->right)
	{
		if (node == parent->left)
			return (parent->right);
		else
			return (parent->right);
	}

	return (NULL);
}
