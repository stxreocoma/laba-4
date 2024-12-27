#include <iostream>
#include <queue>
#include <stack>
#include <algorithm>

static void DFSUtil(const std::vector<std::vector<int>>& graph, int node, std::vector<bool>& visited) {
    visited[node] = true;
    std::cout << node << " ";

    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            DFSUtil(graph, neighbor, visited);
        }
    }
}

static void DFS(const std::vector<std::vector<int>>& graph, int startNode) {
    std::vector<bool> visited(graph.size(), false);
    std::cout << "DFS обход: ";
    DFSUtil(graph, startNode, visited);
    std::cout << "\n";
}