#include<bits/stdc++.h>
using namespace std;

bool isBipartiteUtil(int G[][V], int src, int colorArr[]){
	colorArr[src] = 1;
	queue<int> q;
	q.push(src);
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for( int v=0;v<V;++v){
			if(G[u][v] &&colorArr[v]==-1){
				colorArr[v] = 1-colorArr[u];
				q.push(v);
			}
			else if(G[u][v]&&colorArr[v]){
				return false;
			}
		}
	}
	return true;
}

bool is Bipartite(int G[][V]){
	int colorArr[V];
	for(int i = 0; i<V; ++i){
		colorArr[i] = -1;
	}
	for(int i=0;i<V;i++){
		if(colorArr[i] == -1){
			if(!isBipartiteUtil(G,i,colorArr)){
				return false;
			}
		}
	}
	return true;
}

bool calBeDividedInTwoCliques(int G[][V]){
	int GC[V][V];
	for(int i = 0;i<V;i++){
		for(int j = 0; j<V; j++){
			GC[i][j] = (i!=j): !G[j][i]?0;
		}
	}
	return isBipartite(GC);
}