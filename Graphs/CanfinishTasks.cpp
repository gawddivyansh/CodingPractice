#include<bits/stdc++.h>
using namespace std;

vector<unordered_set<int>> make_graph(int num_tasks, vector<pair<int, int>> &prerequisites){
	vector<unordered_set<int>> graph(num_tasks);
	for(auto: pre: prerequisites){
		graph[pre.second].insert(pre.first);
	}
	return graph;
}

bool dfs_cycle(vector<unordered_set<int>> &graph, int node, vector<bool> &onpath, vector<bool> &visited){
	if(visited[node]){
		return false;
	}
	onpath[node] = visited[node] = true;
	for(int neigh: graph[node]){
		if(onpath[neigh]||dfs_cycle(graph, neigh, onpath, visited)){
			return true;
		}
	}
	return onpath[node] = false;
}

bool canFinish(int num_tasks, vector<pair<int,int>> &prerequisites){
	vector<unordered_set<int>> graph = make_graph(num_tasks, prerequisites);
	vector<bool> onpath(num_tasks, false), visited(num_tasks, false);
	for(int i=0;i<num_tasks;i++){
		if(!visited[i] &&dfs_cycle(graph, i, onpath, visited)){
			return false;
		}
	}
	return true;
}