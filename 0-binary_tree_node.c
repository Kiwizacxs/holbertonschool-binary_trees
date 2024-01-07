#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;

	if (value == NULL)
	{
		return(NULL);
	}

	new_tree->parent = parent;
	new_tree->n = value;
	new_tree->left = NULL;
	new_tree->right = NULL;
	return (new_tree);
}
