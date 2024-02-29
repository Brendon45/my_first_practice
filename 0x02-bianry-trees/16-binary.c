#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: a pointer to the root node of the tree to check
 * 
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	/* If the tree is empty, it is not perfect */
	if (!tree)
		return (0);

	/* Calculate the height of the left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* If the heights are equal, check if both subtrees are perfect */
	 if (left_height == right_height)
	{
	/* If the current node is a leaf, it is perfect */
	if (!tree->left && !tree->right)
		return (1);

	/* Recursively check if both left and right subtrees are perfect */
	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
	}

	return (0);
}
