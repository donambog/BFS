BFS (Breadth First Search)
Overview
Breadth-First Search (BFS) is a graph traversal algorithm that visits all vertices at the current depth level before proceeding to vertices at the next depth level.
How the Algorithm Works

Start from a source vertex
Visit all adjacent vertices
For each adjacent vertex, visit their unvisited adjacent vertices
Continue this process until all vertices are visited

Implementation Details
Core Components

A Graph class using an adjacency list representation
Methods for adding edges and performing BFS traversal
A queue to track vertices to visit
A boolean array to mark visited vertices

Complexity

Time: O(V + E) where V is the number of vertices and E is the number of edges
Space: O(V) for the visited array and queue

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
Graph Structure
Copy   0 --- 1
   |     |
   2 --- 3
   |
   4 --- 5
Expected Output
CopyBFS traversal starting from vertex 0: 0 1 2 3 4 5
Common Applications

Finding shortest paths in unweighted graphs
Web crawling
Social networking features (finding friends at specific connection levels)
GPS Navigation
Network Broadcasting

Building and Running
bashCopyg++ bfs.cpp -o bfs
./bfs
Technical Notes

This implementation is for undirected graphs
The graph is represented using adjacency lists for better space efficiency
For directed graphs, simply remove one of the addEdge calls for each edge

Prerequisites

C++ compiler supporting C++11 or higher
Basic understanding of graph data structures
