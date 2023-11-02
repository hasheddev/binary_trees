#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left;

	if (!parent)
		return (NULL);
	left = binary_tree_node(parent, value);
	if (!left)
		return (NULL);
	if (parent->left)
	{
		left->left = parent->left;
		parent->left->parent = left;
	}
	parent->left = left;
	return (left);
}
