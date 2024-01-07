#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @value: value
 * @parent: parent
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (value == '\0')
		return (NULL);
	if (parent == NULL)
		return (NULL);

    new_node = binary_tree_node(parent, value);
	parent->left = new_node;
	new_node->parent = parent;

	return (new_node);
}
