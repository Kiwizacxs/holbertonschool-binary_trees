#include "binary_trees.h"

size_t
binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t rheight = (1 + binary_tree_height(tree->left));
	size_t lheight = binary_tree_height(tree->left);

	if (rheight > lheight)
		return (rheight + 1);
	else
		return (lheight + 1);
}

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
