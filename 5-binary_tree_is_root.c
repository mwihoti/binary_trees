#include "binary_trees.h"

/**
 * binary_tree_is_root - checks a given node is a root
 * @node: pointer to the node check
 * Return: ! if node otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
