#include "binary_trees.h"

/**
 * binary_tree_depth - A function that measures
 *		the depth of a node in a binary tree.
 *
 * @tree: a pointer to the node to measure the depth.
 *
 * Return: the measure of the depth of the node, if it fail it returns 0.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
