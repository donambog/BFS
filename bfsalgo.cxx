#include <iostream>
#include <queue>
#include <vector>
#include <list>

class Graph {
private:
    int V;                          // Number of vertices
    std::vector<std::list<int>> adj;   // Adjacency list

public:
    // Constructor
    Graph(int vertices) {
        V = vertices;
        adj.resize(vertices);
    }

    // Add an edge to the graph
    void addEdge(int v1, int v2) {
        adj[v1].push_back(v2);
    }

    // BFS traversal from a given source vertex
    void BFS(int start) {
        // Mark all vertices as not visited
        std::vector<bool> visited(V, false);
        
        // Create a queue for BFS
        std::queue<int> queue;
        
        // Mark the current node as visited and enqueue it
        visited[start] = true;
        queue.push(start);
        
        std::cout << "BFS traversal starting from vertex " << start << ": ";
        
        while (!queue.empty()) {
            // Dequeue a vertex and print it
            start = queue.front();
            std::cout << start << " ";
            queue.pop();
            
            // Get all adjacent vertices of the dequeued vertex
            // If an adjacent has not been visited, mark it visited
            // and enqueue it
            for (int adjacent : adj[start]) {
                if (!visited[adjacent]) {
                    visited[adjacent] = true;
                    queue.push(adjacent);
                }
            }
        }
        std::cout << std::endl;
    }
};

// Example usage
int main() {
    // Create a graph with 6 vertices
    Graph g(6);
    
    // Add edges to create the following graph:
    //    0 --- 1
    //    |     |
    //    2 --- 3
    //    |
    //    4 --- 5
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.addEdge(4, 5);
    
    // Perform BFS starting from vertex 0
    g.BFS(0);
    
    return 0;
}
