#include "binary_trees.h"

/**
 * binary_tree_size - measures depth of a node in binary tree
 * @tree: pointer to the node to measure the depth
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
