#include<bits/stdc++.h>
using namespace std;

struct  Node{
	int data;
	Node* left, * right;
};
bool checkUtil(Node* root, int level, int* leafLevel){
	if(root==NULL){
		return true;
	}
	if(root->left==NULL && root->right==NULL){
		if(*leafLevel==0){
			*leafLevel = level;
			return true;
		}
		return level==*leafLevel;
	}
	return checkUtil(root->left, level+1, *leafLevel) && checkUtil(root->right, level+1, *leafLevel);
}

bool checkSameLevel(Node* root){
	int level = 0;
	int* leafLevel;
	*leafLevel = 0;
	checkUtil(root, level, leafLevel);
}