#include "binary_trees.h"
/**
 * binary_tree_inorder - inorder traversal
 * @tree: pointer to node
 * @func: pointer to function to call
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
