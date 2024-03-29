#include "binary_trees.h"

/**
 * binary_tree_delete - Write a function that deletes an entire binary tree
 * @tree: value
 * Return: none
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
