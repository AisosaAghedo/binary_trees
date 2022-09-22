#include "binary_trees.h"
/**
 * binary_tree_height -  function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: returns height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_counter, right_counter;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_counter =  binary_tree_height(tree->left);
	right_counter =  binary_tree_height(tree->right);

	if (left_counter >= right_counter)
		return (left_counter + 1);
	else
		return (right_counter + 1);
}



