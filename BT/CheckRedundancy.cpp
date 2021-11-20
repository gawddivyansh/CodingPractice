#include<bits/stdc++.h>
using namespace std;

bool checkRedundancy(string &str){
	stack<char> ch;
	for(auto& ch:str){
		if(ch==')'){
			char top = st.top();
			st.pop();
			bool flag = true;
			while(!st.empty() && top!='('){
				if(top=='+'||top=='-'||top=='*'||top=='/'){
					flag = false;
				}
				top = st.top();
				st.pop();
			}
			if(flag){
				return true;
			}
		}
		else{
			st.push(ch);
		}
	}
	return false;
}