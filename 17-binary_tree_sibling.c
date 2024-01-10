#include "binary_trees.h"

binary_tree_t
*binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent == NULL || node == NULL)
		return (NULL);
	if (node->parent->left != node && node->parent->left != NULL)
		return (node->parent->left);
	else if (node->parent->right != node && node->parent->right != NULL)
		return (node->parent->right);
	else
		return (NULL);  
}
