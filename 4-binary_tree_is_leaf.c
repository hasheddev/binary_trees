#include "binary_trees.h"

/**
 * binary_tree_is_leaf - pointer to the node to check
 * @node: pointer to the node to check
 * Return: 1 if true else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node ==  NULL || node->left || node->right)
		return (0);
	return (1);
}
