#include "binary_trees.h"

size_t
binary_tree_size(const binary_tree_t *tree)
{
    size_t rheight = 0;

    if (tree == NULL)
        return (0);
    if (tree != NULL)
    {
        rheight += binary_tree_size(tree->right);
        rheight += binary_tree_size(tree->left);
    }
    return (rheight + 1);
}
