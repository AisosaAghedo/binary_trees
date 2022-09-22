#include "binary_trees.h"
/**
 * binary_tree_node_2 - creates a binary tree node
 * @parent: parnt of the node to create
 * @value: value to store in new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node_2(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = new_node->right = NULL;
	return (new_node);
}
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

	if (parent == NULL)
		return (NULL);
	rightchild = binary_tree_node_2(parent, value);
	if (rightchild == NULL)
		return (NULL);
	rightchild->right = parent->right;
	if (rightchild->right != NULL)
		rightchild->right->parent = rightchild;
	parent->right = rightchild;
	return (rightchild);

}
