#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node
 * @value: Integer stored in the node
 *
 * Return: Pointer to the new node, or NULL on failure
 * Description: When created, a node does not have any child
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Dynamically allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL) /* Handling malloc failure */
		return (NULL);

	if (parent == NULL)
		new_node->parent = NULL;
	else
		new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	return (new_node);
}
