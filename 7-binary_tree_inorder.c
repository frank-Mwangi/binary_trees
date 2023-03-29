#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses binary tree inorder
 *
 * @tree: root pointer to tree in question
 * @func: pointer to function call for each node
 *
 * Return: pointer to each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
