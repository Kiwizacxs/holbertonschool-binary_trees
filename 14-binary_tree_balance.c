#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: tree
 * Return: leaves
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_rheigh(tree);
	right_height = binary_tree_lheigh(tree);

	return (right_height - left_height);
}

int
binary_tree_rheigh(const binary_tree_t *tree)
{
	int rheight = 0;

	if (tree == NULL)
		return (0);

	if (tree->right)
		rheight = (1 + binary_tree_rheigh(tree->right));

	return (rheight);
}

int
binary_tree_lheigh(const binary_tree_t *tree)
{
	int lheight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		lheight = (1 + binary_tree_lheigh(tree->left));

	return (lheight);
}
