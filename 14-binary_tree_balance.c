#include "binary_trees.h"

int
binary_tree_heigh(const binary_tree_t *tree)
{
	int rheight = 0;
	int lheight = 0;

	if (tree == NULL)
		return (0);

	if (tree->right)
		rheight = (1 + binary_tree_height(tree->right));
	if (tree->left)
		lheight = (1 + binary_tree_height(tree->left));

	if (rheight > lheight)
		return (rheight);
	else
		return (lheight);
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

	int left_height = binary_tree_heigh(tree->left);
	int right_height = binary_tree_heigh(tree->right);

	return ((int)(left_height - right_height));
}
