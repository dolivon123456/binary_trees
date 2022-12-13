#include "binary_trees.h"

/**
 *binary_tree_node - creates a binary tree node
 *@parent: pointer to the parent node of the node to create
 *@value: value to put in the new node
 *Return: The returning the node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *New_node;
	
	New_node = malloc(sizeof(binary_tree_t));
	if (!New_node)
		return (NULL);
	
	New_node->parent = parent;
	New_node->left = NULL;
	New_node->right = NULL;
	New_node->n = value;
	
	return (New_node);
}
