// C++ program to find minimum
// number of edges between any two
// vertices of the graph

#include <bits/stdc++.h>
using namespace std;

// Class to represent a graph
class Graph {

	// No. of vertices
	int V;
    int c=0;
	// Pointer to an array containing
	// adjacency lists
	list<int>* adj;

	// A function used by minEdgeDFS
	void minEdgeDFSUtil(vector<bool>& visited,
						int src, int des, int& min_num_of_edges,
						int& edge_count);

public:
	// Constructor
	Graph(int V);

	// Function to add an edge to graph
	void addEdge(int src, int des);

	// Prints the minimum number of edges
	void minEdgeDFS(int u, int v);
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int src, int des)
{
	adj[src].push_back(des);
	adj[des].push_back(src);
}

// Utility function for finding minimum number
// of edges using DFS
void Graph::minEdgeDFSUtil(vector<bool>& visited,
						int src, int des, int& min_num_of_edges,
						int& edge_count)
{
	// For keeping track of visited
	// nodes in DFS
	visited[src] = true;

	// If we have found the destination vertex
	// then check whether count of total number of edges
	// is less than the minimum number of edges or not
	if (src == des) {
		if (min_num_of_edges > edge_count)
			min_num_of_edges = edge_count;
	}

	// If current vertex is not destination
	else {

		// Recur for all the vertices
		// adjacent to current vertex
		list<int>::iterator i;


		for (i = adj[src].begin(); i != adj[src].end(); i++) {
			int v = *i;
			c++;
			if (!visited[v]) {
				edge_count++;

				minEdgeDFSUtil(visited, v, des, min_num_of_edges,
							edge_count);
			}
		}
	}

	// Decrement the count of number of edges
	// and mark current vertex as unvisited
	visited[src] = false;
	edge_count--;
	cout<<c;
}

// Function to print minimum number of edges
// It uses recursive minEdgeDFSUtil
void Graph::minEdgeDFS(int u, int v)
{
	// To keep track of all the
	// visited vertices
	vector<bool> visited(V, false);

	// To store minimum number of edges
	int min_num_of_edges = INT_MAX;

	// To store total number of
	// edges in each path
	int edge_count = 0;

	minEdgeDFSUtil(visited, u, v, min_num_of_edges,
				edge_count);

	// Print the minimum number of edges
	cout << min_num_of_edges;
}

// Driver Code
int main()
{
	// Create a graph
	Graph g(5);
	g.addEdge(0, 1);
	g.addEdge(0, 4);
	g.addEdge(1, 2);
	g.addEdge(2, 4);
	g.addEdge(2, 3);
	g.addEdge(3, 4);

	int u = 0;
	int v = 3;
	g.minEdgeDFS(u, v);

	return 0;
}
