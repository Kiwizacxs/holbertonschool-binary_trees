#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: tree
 * Return: none
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	
	if (tree == NULL)
		return(NULL);

	size_t rdepth = (1 + binary_tree_depth(tree->left));
	size_t ldepth = (1 + binary_tree_depth(tree->right));

	if (rdepth > ldepth)
		return (rdepth);
	else
		return (ldepth);
}
