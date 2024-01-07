#include "binary_trees.h"

/**
 * binary_tree_node - Write a function that creates a binary tree node
 * @value: value
 * @parent: parent
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;

	if (value == '\0')
	{
		return(NULL);
	}

	new_tree->parent = parent;
	new_tree->n = value;
	new_tree->left = NULL;
	new_tree->right = NULL;
	return (new_tree);
}
