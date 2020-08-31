#include "binary_trees.h"
/**
 * binary_tree_depth - return the size of tree
 * @tree: pointer to root
 * Return: size of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t size = 0;
	const binary_tree_t *aux = tree;

	if (!aux)
		return (0);
	while (aux->parent)
		aux = aux->parent, size++;
	return (size);
}
