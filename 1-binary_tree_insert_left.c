#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node- function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value:  value to put in the new node
 * Return: address to new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}

/**
 * binary_tree_insert_left - function that inserts a node as the
 * left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (parent == NULL)
		return (NULL);
	left_child = binary_tree_node(parent, value);
	if (left_child == NULL)
		return (NULL);
	left_child->left = parent->left;
	if (left_child->left != NULL)
		left_child->left->parent = left_child;
	parent->left = left_child;
	return (left_child);
}
