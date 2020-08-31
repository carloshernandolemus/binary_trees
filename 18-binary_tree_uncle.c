#include "binary_trees.h"
/**
 * binary_tree_uncle - search uncle nodes
 * @node: node to search uncle
 * Return: uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->n < node->parent->parent->n)
		return ((node->parent->parent->right) ? node->parent->parent->right : NULL);
	if (node->parent->n > node->parent->parent->n)
		return ((node->parent->parent->left) ? node->parent->parent->left : NULL);
	return (NULL);
}
