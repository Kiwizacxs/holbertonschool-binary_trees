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

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	else
		new_node->right = NULL;
	parent->right = new_node;
	return (new_node);
}
