# BFS
Breadth First Search
Breadth-First Search (BFS) Implementation in C++
This is a simple implementation of the Breadth-First Search algorithm for graph traversal. BFS visits all vertices of a graph at the present depth before moving on to vertices at the next depth level.
Algorithm Overview
BFS works by following these steps:

Start from a given source vertex
Visit all adjacent vertices
For each of these adjacent vertices, visit their unvisited adjacent vertices
Continue this process until all vertices are visited

Implementation Details
The implementation includes:

A Graph class that uses an adjacency list representation
Methods to add edges and perform BFS traversal
A queue to keep track of vertices to visit
A boolean array to mark visited vertices

Time Complexity

Time Complexity: O(V + E) where V is the number of vertices and E is the number of edges
Space Complexity: O(V) for the visited array and queue

Usage Example
Usage Example
cppCopy// Create a graph with 6 vertices
Graph g(6);

// Add edges
g.addEdge(0, 1);
g.addEdge(0, 2);
g.addEdge(1, 3);
g.addEdge(2, 3);
g.addEdge(2, 4);
g.addEdge(4, 5);

// Perform BFS starting from vertex 0
g.BFS(0);
This will create a graph with the following structure:
Copy   0 --- 1
   |     |
   2 --- 3
   |
   4 --- 5
Expected output:
CopyBFS traversal starting from vertex 0: 0 1 2 3 4 5
Common Applications
BFS is useful for:

Finding shortest paths in unweighted graphs
Web crawling
Social networking features (finding friends at a certain connection level)
GPS Navigation
Network Broadcasting

Building and Running
To compile and run:
bashCopyg++ bfs.cpp -o bfs
./bfs
Notes

This implementation assumes an undirected graph
The graph is represented using adjacency lists for better space efficiency
For directed graphs, simply remove one of the addEdge calls for each edge
