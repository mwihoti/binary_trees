#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value:  value to store in the new node
 * Return: return pointer of created node or NULL on failure or if parent NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_r;

	if (!parent)
		return (NULL);
	new_r = malloc(sizeof(binary_tree_t));

	if (!new_r)
		return (NULL);
	new_r->n = value;
	new_r->parent = parent;
	new_r->left = NULL;
	new_r->right = parent->right;
	parent->right = new_r;
	if (new_r->right)
		new_r->right->parent = new_r;
	return (new_r);
}
