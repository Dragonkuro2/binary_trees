#include "binary_trees.h"

/**
 * binary_tree_sibling - A function that finds the sibling of a node.
 *
 * @node: a pointer to the node to find the sibling.
 *
 * Return: null if the function fail, otherwise it return a pointer to the node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left != NULL && node->parent->right != NULL)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		else
			return (node->parent->left);
	}
	else
		return (NULL);
}
