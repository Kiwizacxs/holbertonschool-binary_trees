#include "binary_trees.h"

/**
 * binary_tree_insert_right - Write a function that creates a binary tree node
 * @value: value
 * @parent: parent
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (value == '\0')
		return (NULL);
	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		parent->right = NULL;
	}
	parent->right = new_node;
	new_node->parent = parent;

	return (new_node);
}
