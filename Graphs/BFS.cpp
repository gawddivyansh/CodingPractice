#include<bits/stdc++.h>
using namespace std;
class Graph{
	int V;
	list<int>*adj;
public:
	Graph(int v);
	void addEdge(int v, int w);
	void BFS(int s);
}
Graph::Graph(int v){
	this->V = V;
	adj = new list<int>[V];
}
void Graph::addEdge(int v, int w){
	adj[v].push_back(w);
}
void Graph::BFS(int s){
	bool* visited = new bool[V];
	for(int i = 0; i<V;i++){
		visited[i] = false;
	}
	list<int>::iterator i;
	list<int>queue;
	queue.push_back(s);
	visited[s] = true;
	while(!queue.empty()){
		s = queue.front();
		cout<<s<<" ";
		queue.pop_front();
		for(i = queue.begin();i<queue.end();i++){
			if(!visited[*i]){
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}