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
Node* buildTree(char in[], char pre[], int inSrt, int InEnd, unordered_map<char, int> &mp){
	static int preIndex = 0;
	if(inSrt>inEnd){
		return NULL;
	}
	char curr = pre[preIndex++];
	Node* tNode = new Node;
	tNode->data = key;
	if(inSrt == inEnd){
		return tNode;
	}
	int inIndex = mp[curr];
	tNode->left = buildTree(in,pre, inSrt, inIndex-1, mp);
	tNode->right = buildTree(in,pre, inIndex+1, inEnd, mp);
	return tNode;
}
Node* buildTreeWrap(char in[], char pre[], int len){
	unordered_map<char, int> m;
	for(int i = 0; i<len; i++){
		m[in[i]] = i;
	}
	return buildTree(in,pre,0,len-1,m);
}