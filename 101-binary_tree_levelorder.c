#include "binary_trees.h"

/**
 * print - prints data in a tree node
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to the root node of the tree to traverse
 * @level: levels to traverse till node to print
 * Return: Nothing
 */

void print(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (tree == NULL)
		return;
	if (level == 0)
		func(tree->n);
	else if (level > 0)
	{
		print(tree->left, func, level - 1);
		print(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_levelorder - goes through a binary tree using
 * level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t i;
	size_t height = binary_tree_height(tree);

	for (i = 0; i <= height; i++)
		print(tree, func, i);
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
