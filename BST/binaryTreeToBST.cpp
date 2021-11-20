#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* left, *right;
};
void storeInorder(Node* node, int inorder[], int* index_ptr){
	if(node==NULL){
		return;
	}
	storeInorder(node->left,inorder,index_ptr);
	inorder[*index_ptr] = node->data;
	(*index_ptr)++;
	storeInorder(node->right, inorder, index_ptr);
}
int countNodes(Node* node){
	if(node==NULL){
		return 0;
	}
	else{
		return 1+ countNodes(node->left)+countNodes(node->right);
	}
}

int compare(const void *a, const void* b){
	return *(int*)a-*(int*)b;
}

void arrayToBST(int* arr, Node* root, int* index_ptr){
	if(root==NULL){
		return;
	}
	arrayToBST(arr,root->left, index_ptr);
	root->data = arr[*index_ptr];
	(*index_ptr)++;
	arrayToBST(arr, root->right, index_ptr);
	return;
}

void binaryTreeToBST(Node* root){
	if(root==NULL){
		return;
	}
	int n = countNodes(root);
	int* inorder = new int[n];
	int* index_ptr;
	*index_ptr = 0;
	storeInorder(root, inorder, index_ptr);
	qsort(inorder,n,sizeof(inorder[0]),compare);
	*index_ptr = 0;
	arrayToBST(inorder, root, index_ptr);
}

void printInorder(Node* root){
	if(root==NULL){
		return;
	}
	printInorder(root->left);
	cout<<root->data<<" ";
	printInorder(root->right);
	return;
}

int main(){
	return 0;
}
