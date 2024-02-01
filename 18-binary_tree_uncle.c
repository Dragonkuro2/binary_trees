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

/**
 * binary_tree_uncle - A function that finds the uncle of a node.
 *
 * @node: is a pointer to the node to find the uncle.
 *
 * Return: it returns NULL if it fail
 *	otherwise it returns a pointer to uncle node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *checker;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	checker = binary_tree_sibling(node->parent);
	return (checker);
}
