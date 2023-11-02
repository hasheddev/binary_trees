#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotates a binary tree right.
 * @tree: pointer to the root node of the tree to rotate.
 * Return: A pointer to the new root.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pivot = tree->left;, *tmp;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	tmp = pivot->right;
	pivot->right = tree;
	tree->left = tmp;
	if (tmp != NULL)
		tmp->parent = tree;
	tmp = tree->parent;
	tree->parent = pivot;
	pivot->parent = tmp;
	if (tmp != NULL)
	{
		if (tmp->left != tree)
			tmp->right = pivot;
		else
			tmp->left = pivot;
	}

	return (pivot);
}
