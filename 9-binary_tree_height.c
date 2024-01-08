#include "binary_trees.h"

size_t
binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    size_t rheight = binary_tree_height(tree->right);
    size_t lheight = binary_tree_height(tree->left);

    if (rheight > lheight)
        return (rheight + 1);
    else
        return (lheight + 1);
}