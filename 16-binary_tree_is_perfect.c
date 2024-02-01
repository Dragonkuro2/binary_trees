#include "binary_trees.h"

/**
 * perfect_tree - A function that measures the height of a binary tree.
 *
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: the height of the tree, if it fails it'll return 0.
 */

size_t perfect_tree(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree->left && tree->right)
	{
		left = 1 + perfect_tree(tree->left);
		right = 1 + perfect_tree(tree->right);
		if (right == left && right != 0 && left != 0)
			return (right);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - A function that checks if a binary tree is perfect.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, otherwise 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result;

	if (tree == NULL)
		return (0);
	result =  perfect_tree(tree);
	if (result != 0)
		return (1);
	return (0);
}
