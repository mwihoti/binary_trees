#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the node with atleast 1 child
 * @tree: pointer to the root node of the tree;
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return ( 0 ); 
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
