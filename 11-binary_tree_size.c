#include "binary_trees.h"
/**
 * binary_tree_size -  measures the size of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: the size or 0, on failure
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0, size = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	size = right + left + 1;

	return (size);
}
