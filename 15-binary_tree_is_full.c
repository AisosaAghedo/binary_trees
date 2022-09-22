#include "binary_trees.h"
/**
 * binary_tree_is_full -  function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if full 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_check, right_check;

	if (tree == NULL)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
		return (1);
	left_check = binary_tree_is_full(tree->left);
	right_check = binary_tree_is_full(tree->right);
	if (right_check == 0 || left_check == 0)
		return (0);
	else
		return (1);
	if (tree->left && tree->right)
		return (1);
	if (!tree->left && !tree->right)
		return (1);
	return (0);
}
