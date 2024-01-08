#include "binary_trees.h"

size_t
binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	if (tree != NULL)
	{
		size += binary_tree_size(tree->right);
		size += binary_tree_size(tree->left);
	}
	return (size + 1);
}
