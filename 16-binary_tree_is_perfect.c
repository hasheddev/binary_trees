#include "binary_trees.h"

/**
 * is_perfect - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * @depth: depth of tree
 * @level: current level on the tree
 * Return: 1 if true else 0
 */
int is_perfect(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (tree->left == NULL && tree->right == NULL)
		return (depth == level);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect(tree->left, depth, level + 1) &&
	is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if true else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth = binary_tree_height(tree);

	if (!tree)
		return (0);
	return (is_perfect(tree, depth, 0));
}

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
	l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((r_height > l_height) ? r_height : l_height);
}
