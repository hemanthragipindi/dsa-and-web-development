#include <iostream>
#include <limits>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

void dijkstra(const vector<vector<pair<int, int>>>& graph, int source) {
    const int infinity = numeric_limits<int>::max();
    vector<int> distance(graph.size(), infinity);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> queue;
    distance[source] = 0;
    queue.push({0, source});

    while (!queue.empty()) {
        pair<int, int> current = queue.top();
        queue.pop();
        int currentDistance = current.first;
        int currentVertex = current.second;
        if (currentDistance != distance[currentVertex]) continue;
        for (const pair<int, int>& edge : graph[currentVertex]) {
            int neighbor = edge.first;
            int weight = edge.second;
            int newDistance = currentDistance + weight;
            if (newDistance < distance[neighbor]) {
                distance[neighbor] = newDistance;
                queue.push({newDistance, neighbor});
            }
        }
    }

    for (int value : distance) {
        if (value == infinity) cout << "INF ";
        else cout << value << ' ';
    }
    cout << '\n';
}

int main() {
    vector<vector<pair<int, int>>> graph(4);
    graph[0] = {{1, 4}, {2, 1}};
    graph[2] = {{1, 2}, {3, 5}};
    graph[1] = {{3, 1}};
    dijkstra(graph, 0);
    return 0;
}
