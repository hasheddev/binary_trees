#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: tree size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->right) +
	binary_tree_size(tree->left));
}

/**
 * is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to measure the size
 * @size: number of nodes in the tree
 * @index: current index of tree element
 * Return: 0 if false else 1
 */
int is_complete(const binary_tree_t *tree, size_t size, size_t index)
{
	if (tree == NULL)
		return (1);
	if (index >= size)
		return (0);
	return (is_complete(tree->left, size, 2 * index + 1) &&
	is_complete(tree->right, size, 2 * index + 2));
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if false else 1
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size = binary_tree_size(tree);

	if (tree == NULL)
		return (0);
	return is_complete(tree, size , 0);
}
