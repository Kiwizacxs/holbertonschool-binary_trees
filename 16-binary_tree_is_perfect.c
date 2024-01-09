#include "binary_trees.h"
#include "14-binary_tree_balance.c"
#include "15-binary_tree_is_full.c"

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
