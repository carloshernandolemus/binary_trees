#include "binary_trees.h"
/**
 * go_through - go_through in tree
 * @node: pointer of node
 * @func: function to call
 */
void go_through(const binary_tree_t *node, void (*func)(int))
{
	func(node->n);
	if (node->left)
	{
		if (node->left->left || node->left->right)
			go_through(node->left, func);
		else
			func(node->left->n);
	}
	if (node->right)
	{
		if (node->right->left || node->right->right)
			go_through(node->right, func);
		else
			func(node->right->n);
	}
}

/**
 * binary_tree_preorder - fucntion that goes through a binary tree
 * @tree: pointer to root
 * @func: function to call
 * Return: 1 if node is a root, otherwise 0
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	go_through(tree, func);
}
