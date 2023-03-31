#include "binary_trees.h"
/**
 * binary_tree_nodes - counts parent nodes in binary tree
 *
 * @tree: Tree in question
 * Return: no of nodes with one child or more
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		if (tree->left != NULL || tree->right != NULL)
			nodes += 1;
		else
			nodes += 0;

		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}	
