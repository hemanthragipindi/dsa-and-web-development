#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void breadthFirstSearch(const vector<vector<int>>& graph, int source) {
    vector<bool> visited(graph.size(), false);
    queue<int> vertices;
    vertices.push(source);
    visited[source] = true;
    while (!vertices.empty()) {
        int current = vertices.front();
        vertices.pop();
        cout << current << ' ';
        for (int neighbor : graph[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                vertices.push(neighbor);
            }
        }
    }
    cout << '\n';
}

void depthFirstSearch(const vector<vector<int>>& graph, int vertex, vector<bool>& visited) {
    visited[vertex] = true;
    cout << vertex << ' ';
    for (int neighbor : graph[vertex]) {
        if (!visited[neighbor]) depthFirstSearch(graph, neighbor, visited);
    }
}

int main() {
    vector<vector<int>> graph{{1, 2}, {0, 3}, {0, 3}, {1, 2}};
    breadthFirstSearch(graph, 0);
    vector<bool> visited(graph.size(), false);
    depthFirstSearch(graph, 0, visited);
    cout << '\n';
    return 0;
}
