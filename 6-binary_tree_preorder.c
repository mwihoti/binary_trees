#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using preorder traversal
 * @tree: pointer to the root of the node
 * @func: pointer to the function call
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
