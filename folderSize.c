#include <stdlib.h>
#include "folderSize.h"

//
treeNode* makeRootNode(int size, treeNode* leftNode, treeNode* rightNode) {
	treeNode* root = (treeNode*)malloc(sizeof(treeNode));	//실전 시 malloc 활용 이후 free
	root->size = size;
	root->left = leftNode;
	root->right = rightNode;
	return root;
}

//
int postorder_FolderSize(treeNode* root) {
	if (root) {
		postorder_FolderSize(root->left);
		postorder_FolderSize(root->right);
		FolderSize += root->size;
	}
	return FolderSize;
}