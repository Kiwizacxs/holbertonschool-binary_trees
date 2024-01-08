#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor of a binary tree
 * @tree: tree
 * Return: leaves
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return ((int)(left_height - right_height));
}
