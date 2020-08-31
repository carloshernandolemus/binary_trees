#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if the tree is full
 * @tree: pointer to root
 * Return: 0 is not full, 1 is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int ans = 1;

	if (!tree)
		return (0);
	if (tree->left)
	{
		if (tree->right)
		{
			ans *= binary_tree_is_full(tree->left);
			ans *= binary_tree_is_full(tree->right);
		}
		else
			return (0);
	}
	else if (!tree->right)
		return (1);
	else
		return (0);
	return (ans);
}
