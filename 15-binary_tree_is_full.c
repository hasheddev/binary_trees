#include "binary_trees.h"

/**
 * is_full - checks if a binary tree is full
 * @tree:  pointer to the root node of the tree to check
 * Return: 1 if true else 0
 */
int is_full(const binary_tree_t *tree)
{
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (is_full(tree->left) && is_full(tree->right));
	return (0);

}

/**
 * binary_tree_is_ - checks if a binary tree is full
 * @tree:  pointer to the root node of the tree to check
 * Return: 1 if true else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_full(tree));
}
