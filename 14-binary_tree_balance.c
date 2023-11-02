#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height;
	size_t r_height;

	if (tree == NULL)
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	return ((r_height > l_height) ? r_height + 1 : l_height + 1);
}

/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree: pointer to the node of the tree to measure its balance
 * Return: balance factor of tree node
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) -
	binary_tree_height(tree->right));
}
