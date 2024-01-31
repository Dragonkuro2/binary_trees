#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the number of nodes in a binary tree with children.
 * @tree: Pointer to the root of the binary tree.
 * Return: Number of nodes with children.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t has_children = 0, left = 0, right = 0;

	if (tree == NULL)
		return 0;

	has_children = (tree->left || tree->right) ? 1 : 0;
	left = binary_tree_nodes(tree->left);
	right =  binary_tree_nodes(tree->right);

	return (has_children + left + right);
}

