#include "binary_trees.h"

/**
 * binary_tree_insert_right -  inserts a node as the  right-child of a node
 * @parent: pointer to the node to insert the  right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right;

	if (!parent)
		return (NULL);
	right = binary_tree_node(parent, value);
	if (!right)
		return (NULL);
	if (parent->right)
	{
		right->right = parent->right;
		parent->right->parent = right;
	}
	parent->right = right;
	return (right);
}
