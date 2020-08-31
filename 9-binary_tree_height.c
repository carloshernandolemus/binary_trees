#include "binary_trees.h"
/**
 * binary_tree_height - return the size of tree
 * @tree: pointer to root
 * Return: size of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l += 1 + binary_tree_height(tree->left);
	if (tree->right)
		r += 1 + binary_tree_height(tree->right);
	if (l > r)
		return (l);
	else
		return (r);
}
