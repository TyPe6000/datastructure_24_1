#include <stdio.h>
#include <stdlib.h>
#include "traversalBT.h"

// data
treeNode* makeRootNode(element data, treeNode* leftNode, treeNode* rightNode) {
	treeNode* root = (treeNode*)malloc(sizeof(treeNode));	//실전 시 malloc 활용 이후 free
	root->data = data;
	root->left = leftNode;
	root->right = rightNode;
	return root;
}

//
void preorder(treeNode* root) {
	if (root) {
		printf("%c", root->data);	//작업D
		preorder(root->left);	//작업L
		preorder(root->right);	//작업R
	}
}

//
void inorder(treeNode* root) {
	if (root) {
		inorder(root->left);
		printf("%c", root->data);
		inorder(root->right);
	}
}

//
void postorder(treeNode* root) {
	if (root) {
		postorder(root->left);
		postorder(root->right);
		printf("%c", root->data);
	}
}

