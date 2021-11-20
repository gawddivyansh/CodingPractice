#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* left, *right;
};
bool areMirror(Node* a, Node*b){
	if(a==NULL && b==NULL){
		return true;
	}
	if(a==NULL||b==NULL){
		return false;
	}
	return a->data==b->data && areMirror(a->left,b->right)&& areMirror(a->right, b->left);
}
Node* newNode(int data){
	Node* new_node = new Node;
	new_node->data = data;
	new_node->left = NULL;
	new_node-_right = NULL;
	return new_node
}