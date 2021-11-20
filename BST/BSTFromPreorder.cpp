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

Node* constructTreeUtil(int pre[], int* preindex, int key, int min, int max, int size){
	if(preindex>=size){
		retrun NULL;
	}
	node* root = NULL;
	if(key>min&& key<max){
		root = Node(key);
		*preindex++;
		if(*preindex<size){
			root->left = constructTreeUtil(pre, preindex, pre[*preindex], min, key,size);
		}
		if(*preindex<size){
			root->right = constructTreeUtil(pre, preindex, pre[*preindex], key, max, size);
		}
	}
	retrun root;
}
Node* constructTree(int pre[], int size){
	int preindex = 0;
	retrun constructTreeUtil(pre, &preindex, pre[0], INT_MIN, INT_MAX, size);
}
