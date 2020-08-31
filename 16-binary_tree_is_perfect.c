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
		size += 1 + binary_tree_si(tree->left);
	if (tree->right)
		size += 1 + binary_tree_si(tree->right);
	return (size);
}
/**
 * binary_tree_size - return the size of tree
 * @tree: pointer to root
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_si(tree) + 1);
}


/** BELOW IS THE 16 TAKS, 11 TASK USED TO GET THE SIZE OF NODES*/


/**
 * binary_tree_is_perfect - checks if the tree is perfect
 * @tree: pointer to root
 * Return: 0 is not perfect, 1 is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->right && tree->left)
	{
		if (binary_tree_size(tree->right) == binary_tree_size(tree->left))
			return (1);
		return (0);
	}
	return (1);
}
