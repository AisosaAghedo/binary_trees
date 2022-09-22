#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left >= right)
		return (1 + left);
	return (1 + right);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left_c, *right_c;

	if (tree == NULL)
		return (0);
	left_c = tree->left;
	right_c = tree->right;
	if (!tree->right && !tree->left)
		return (1);
	if (left_c == NULL || right_c == NULL)
		return (0);
	if (binary_tree_height(left_c) == binary_tree_height(right_c))
	{
		if (binary_tree_is_perfect(left_c) && binary_tree_is_perfect(right_c))
			return (1);
	}
	return (0);
}
