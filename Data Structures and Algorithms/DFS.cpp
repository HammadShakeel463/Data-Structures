#include<iostream>
#include<bits/stdc++.h>

using namespace std ;

class Graph {
	private:		
		map<int, bool> visited ;
		map<int, list<int> > adj ;

	public:
		void addEdge(int , int);
		void DFS(int);
};

void Graph::addEdge(int v , int w ){
	adj[v].push_back(w) ;
}

void Graph::DFS(int v){
	visited[v] = true ;
	cout << v << " " ;
	list<int>::iterator it ;
	for(it = adj[v].begin() ; it != adj[v].end() ; it++ ){
		if(!visited[*it]){
			DFS(*it);
		}
	}
}

int main(){
	
	Graph g ;
	g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
	
	g.DFS(2);
	
	
	return 0 ;
}




