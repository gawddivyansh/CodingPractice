#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* left, *right;
	Node(int key){
		data = key;
		left = right = NULL;
	}
};
Node* getNode(int data){
	Node* node = new Node;
	node->data = data;
	node->left = node->right = NULL;
	return node;
}
void preOrderTraversal(Node* root);
void InOrderTraversal(Node* root){
	if(root==NULL){
		return;
	}
	InOrderTraversal(root-left, arr);
	arr.push_back(root->data);
	InOrderTraversal(root-right, arr);

}

void BSTToMinHeap(Node* root, vector<arr>arr, int* i){
	if(root==NULL){
		return;
	}
	root->data = arr[++i];
	BSTToMinHeap(root->left,arr,i);
	BSTToMinHeap(root->right,arr,i);

}
void convertBSTToMinHeap(Node* root){
	vector<int arr;
	int i = -1;
	InOrderTraversal(root, arr);
	BSTToMinHeap(root, arr, &i);
}