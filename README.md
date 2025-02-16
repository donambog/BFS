🌳 BFS (Breadth First Search)  
📖 What is BFS?  

BFS is like exploring a maze level by level - it visits all vertices at the current depth before moving deeper. Think of it as ripples spreading out from a stone dropped in water.  

🎯 Key Features  

Systematic Exploration: Guarantees finding the shortest path in unweighted graphs
Level-by-Level: Visits vertices in order of their distance from the source
Memory Efficient: Uses a queue data structure for traversal

🔧 Implementation 

Core Components

Graph class with adjacency list representation
Queue-based traversal mechanism
Visited vertex tracking system

Performance  
AspectComplexityTimeO(V + E)SpaceO(V)
💻 Code Example
cppCopy// Create a graph with 6 vertices
Graph g(6);

// Add edges  
g.addEdge(0, 1);
g.addEdge(0, 2);
g.addEdge(1, 3);
g.addEdge(2, 3);
g.addEdge(2, 4);
g.addEdge(4, 5);

// Start BFS from vertex 0
g.BFS(0);
Visual Representation
Copy   0 --- 1
   |     |
   2 --- 3
   |
   4 --- 5
Output
bashCopyBFS path: 0 1 2 3 4 5
🚀 Applications

🌐 Web Crawling
🤝 Social Network Analysis
🗺️ GPS Navigation Systems
📡 Network Broadcasting
🎮 Game Development (AI pathfinding)

⚙️ Build & Run
bashCopy# Compile
g++ bfs.cpp -o bfs

# Execute
./bfs
📋 Prerequisites

C++11 or higher
Basic graph theory understanding

📌 Technical Notes

✅ Optimized for undirected graphs
✅ Space-efficient adjacency list implementation
✅ Easily adaptable for directed graphs

🤝 Contributing
Feel free to:

🐛 Report bugs
💡 Suggest enhancements
🔧 Submit pull requests

📬 Contact & Support

📝 Open an issue for questions
⭐ Star the repo if you find it helpful!

📈 Performance Tips

Use a vector for visited array in large graphs
Consider using bitset for memory optimization
Pre-allocate container sizes when possible

🔍 Debug Tools

Vertex visit order tracking
Path reconstruction capability
Distance calculation from source


Happy Coding! 🚀
