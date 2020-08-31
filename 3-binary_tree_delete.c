#include "binary_trees.h"
/**
 * delete_node - delete values from a node
 * @node: Pointer
 */
void delete_node(binary_tree_t *node)
{
	if (node->left)
	{
		if (node->left->left || node->left->right)
			delete_node(node->left);
		else
			free(node->left);
	}
	if (node->right)
	{
		if (node->right->left || node->right->right)
			delete_node(node->right);
		else
			free(node->right);
	}
	free(node);
}

/**
 * binary_tree_delete - delete a tree
 * @tree: root of tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	delete_node(tree);
}
