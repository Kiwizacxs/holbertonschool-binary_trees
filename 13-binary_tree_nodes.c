#include "binary_trees.h"

size_t
binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	if (tree->left != NULL || tree->right != NULL)
	{
		return (nodes + 1);
	}

	return (nodes);
}
