#include <iostream>
#include <queue>
#include <stack>
#include <algorithm>

static void BFS(const std::vector<std::vector<int>>& graph, int startNode) {
    std::vector<bool> visited(graph.size(), false);
    std::queue<int> q;

    visited[startNode] = true;
    q.push(startNode);

    std::cout << "BFS обход: ";
    while (!q.empty()) {
        int currentNode = q.front();
        q.pop();
        std::cout << currentNode << " ";

        for (int neighbor : graph[currentNode]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    std::cout << "\n";
}