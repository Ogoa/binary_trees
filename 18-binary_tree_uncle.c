#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node whose uncle is to be found
 *
 * Return: Pointer to the uncle node, otherwise NULL if node is NULL
 * or node has no uncle
 * Description: An uncle node is the sibling node to the parent node of
 * a given node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent && node->parent->parent)
	{
		grandparent = node->parent->parent;
		if (grandparent->right && grandparent->left)
		{
			if (node->parent == grandparent->left)
				return (grandparent->right);
			else
				return (grandparent->left);
		}
	}

	return (NULL);
}
