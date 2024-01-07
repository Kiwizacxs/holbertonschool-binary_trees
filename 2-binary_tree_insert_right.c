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

	new_tree = malloc(sizeof(binary_tree_t));
	if (new_tree == NULL)
		return (NULL);

	new_tree->parent = parent;
	new_tree->n = value;
	new_tree->left = NULL;
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
