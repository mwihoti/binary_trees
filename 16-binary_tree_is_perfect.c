#include "binary_trees.h"

/**
 * _pow_recursion - returns the value of x raised to power of y
 * @x: value of exponentiate
 * @y: power to raise x to
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_tree_is_perfect - checks if binary is perfect
 * @tree: pointer to the root node
 * Return: 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h = 0, n = 0, p = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	h = binary_tree_height(tree);
	n = binary_tree_size(tree);

	p = (size_t)_pow_recursion(2, h + 1);
	return (p - 1 == n);
}


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

/**
 * binary_tree_height - measures height of a binary tree
 * @tree: pointer to the root node
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}
