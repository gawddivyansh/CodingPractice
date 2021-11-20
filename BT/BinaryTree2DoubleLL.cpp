#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* left, *right;
};
void BinaryTree2DoubleLL(Node* root, Node**head){
	if(root==NULL){
		return;
	}
	static Node* prev = NULL;
	BinaryTree2DoubleLL(root->left,head);
	if(prev==NULL){
		*head = root;
	}
	else{
		root->left = prev;
		prev->right = root;
	}
	prev = root;
	BinaryTree2DoubleLL(root->right,head);
}