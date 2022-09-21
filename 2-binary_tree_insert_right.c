#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a new_node at
 * the right of a node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightchild;

	rightchild = binary_tree_node(parent, value);
	if (parent == NULL)
		return (NULL);
	if (rightchild == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		rightchild->right = parent->right;
		parent->right->parent = rightchild;
	}
	parent->right = rightchild;
	return (rightchild);
}
