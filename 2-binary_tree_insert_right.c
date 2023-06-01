#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a binary tree node
 * @parent: pointer to parent node
 * @value: integer to be stored
 * Return: pointer to new node or null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp;

	if (newnode == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);
	newnode->n = value;
	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right->parent = newnode;
		newnode->parent = parent;
		parent->right = newnode;
		newnode->right = temp;
		newnode->left = NULL;
	}
	else
	{
		newnode->parent = parent;
		parent->right = newnode;
		newnode->left = NULL;
		newnode->right = NULL;
	}
		return (newnode);
}
