#include "binary_trees.h"
/**
 * binary_tree_nodes -  function that counts the nodes with at least 1 child
 * in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with atleast 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1);
	else
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
