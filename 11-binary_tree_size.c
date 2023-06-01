#include "binary_trees.h"
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left;
	size_t right;
	if (tree == NULL)
		return 0;
   	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	return (left + right + 1);
}

