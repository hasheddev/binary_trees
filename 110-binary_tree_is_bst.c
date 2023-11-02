#include "binary_trees.h"

/**
 * is_bst - helper for valid Binary Search Tree check
 * @tree: pointer to the root node of the tree to check
 * @min: lowest range value to check
 * @max: largest range value to check
 * Return: 1 if true else 0
 */
int is_bst(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);
	if (tree->n >= max || tree->n <= min)
		return (0);
	return (is_bst(tree->left, min, tree->n) &&
	is_bst(tree->right, tree->n, max));
}

/**
 * binary_tree_is_bst -  checks if a binary tree is a valid Binary Search Tree
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if true else 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst(tree, INT_MIN, INT_MAX));
}
