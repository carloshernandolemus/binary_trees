#include "binary_trees.h"
/**
 * binary_tree_sibling - search siblings nodes
 * @node: node to search sibling
 * Return: sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->n < node->parent->n)
		return ((node->parent->right) ? node->parent->right : NULL);
	if (node->n > node->parent->n)
		return ((node->parent->left) ? node->parent->left : NULL);
	return (NULL);
}
