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
