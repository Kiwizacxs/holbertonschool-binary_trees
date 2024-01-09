#include "binary_trees.h"

size_t
binary_tree_height(const binary_tree_t *tree)
{
	size_t rheight = 0;
	size_t lheight = 0;

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
