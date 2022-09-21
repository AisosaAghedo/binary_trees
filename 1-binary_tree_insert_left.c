#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - function that inserts a node as the
 * left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftchild = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	leftchild = binary_tree_node(parent, value);
	if (leftchild == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		leftchild->left = parent->left;
		parent->left->parent = leftchild;
	}
	parent->left = leftchild;

	return (leftchild);
}
