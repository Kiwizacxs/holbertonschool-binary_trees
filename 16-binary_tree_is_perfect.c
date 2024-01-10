#include "binary_trees.h"

int
binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_balance(tree) == 0 && binary_tree_is_full(tree) == 1)
	{
		return (1);
	}
	else
		return (0);
}

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_lheigh(tree);
	right_height = binary_tree_rheigh(tree);

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

int
binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}
	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	}
	return (0);
}
