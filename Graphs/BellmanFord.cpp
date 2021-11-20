#include<bits/stdc++.h>
using namespace std;

struct Edge{
	int src, dest, weight;
};
struct Graph{
	int V, E;
	Edge *edge;
};
struct Graph* createGraph(int V, int E){
	Graph* graph = new Graph;
	graph->V = V;
	graph->E = E;
	graph->edge = new Edge[E];
	return graph;
}
void printArr(int dist[], int n){
	for(int i=0;i<n;i++){
		cout<<dist[i]<<" ";
	}
	cout<<"\n";
	return;
}
void BellmanFord(Graph* graph, int src){
	int V = graph->V;
	int E = graph->E;
	int dist[V];
	for(int i=0;i<V;i++){
		dist[i] = INT_MAX;
	}
	dist[src] = 0;
	for(i=0;i<V-1;i++){
		for(int j=0;i<E;j++){
			int u = graph->edge[j].src;
			int v = graph->edge[j].dest;
			int weight = graph->edge[j].weight;
			if(dist[u]!=INT_MAX && dist[u]+weight<dist[v]){
				dist[v] = dist[u]+weight;
			}
		}
	}
	for(int j=0;i<E;j++){
		int u = graph->edge[j].src;
		int v = graph->edge[j].dest;
		int weight = graph->edge[j].weight;
		if(dist[u]!=INT_MAX && dist[u]+weight<dist[v]){
			cout<<"Suss\n";
			retun;
		}
	}
	printArr(dist,V);
	return;
}