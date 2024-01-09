#include "binary_trees.h"

int
binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    if (_binary_tree_balancion(tree) == 0 && _binary_tree_is_fut(tree) == 1)
    {
        return (1);
    }
    else
        return (0);
}

int _binary_tree_balancion(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = _binary_tree_lheig(tree);
	right_height = _binary_tree_rightheig(tree);

	return (right_height - left_height);
}

int
_binary_tree_rightheig(const binary_tree_t *tree)
{
	int rheight = 0;

	if (tree == NULL)
		return (0);

	if (tree->right)
		rheight = (1 + _binary_tree_rightheig(tree->right));

	return (rheight);
}

int
_binary_tree_lheig(const binary_tree_t *tree)
{
	int lheight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		lheight = (1 + _binary_tree_lheig(tree->left));

	return (lheight);
}

#include "binary_trees.h"

int
_binary_tree_is_fut(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}
	if (tree->left && tree->right)
	{
		return (_binary_tree_is_fut(tree->left) &&
			_binary_tree_is_fut(tree->right));
	}
	return (0);
}
