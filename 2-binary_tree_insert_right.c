#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Integer value to store in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure or if
 * parent is NULL
 * Description: If parent already has a left-child, the new node must
 * take its place, and the old left-child must be set as the left-child
 * of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Dynamically allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL || parent == NULL)
	{
		if (new_node)
			free(new_node);
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}
	else
	{
		parent->right = new_node;
	}

	return (new_node);
}
