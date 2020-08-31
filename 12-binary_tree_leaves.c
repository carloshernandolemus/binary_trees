#include "binary_trees.h"
/**
 * binary_tree_si - return the size of tree
 * @tree: pointer to root
 * Return: size of the tree
 */
size_t binary_tree_si(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (size);
	if (tree->left)
		size += binary_tree_si(tree->left);
	else if (!tree->right)
		return (1);
	if (tree->right)
		size += binary_tree_si(tree->right);
	return (size);
}
/**
 * binary_tree_leaves - return the size of tree
 * @tree: pointer to root
 * Return: size of the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_si(tree));
}
