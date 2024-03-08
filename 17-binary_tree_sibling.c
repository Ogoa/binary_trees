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
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->right)
		return (node->parent->right);
	return (NULL);
}
