#include<bits/stdc++.h>
using namespace std;
#define MAX_CHARS 256

bool areIsomorphic(string str1, string str2){
	int m = str1.length();
	int n = str2.length();
	bool marked[MAX_CHARS] = {false};
	int map[MAX_CHARS];
	memset(map,-1, sizepf(map));
	for(int i=0;i<n;i++){
		if(map[str1[i]]==-1){
			if(marked[str2[i]]==true){
				false;
			}
			marked[str2[i]] = true;
			map[str1[i]] = str2[i];
		}
		else if(map[str1[i]]!= str2[i]){
			return false;
		}
	}
	return true;
}