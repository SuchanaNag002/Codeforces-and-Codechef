#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> &a, vector<int> &b) {
    // Step 1: Build the adjacency list representation of the graph.
    unordered_map<int, vector<int>> graph;
    for (int i = 0; i < a.size(); ++i) {
        graph[a[i]].push_back(b[i]);
        graph[b[i]].push_back(a[i]);
    }

    // Step 2: Initialize the queue and seconds counter.
    queue<int> queue;
    int seconds = 0;

    // Step 3: Add vertices with at most one edge to the queue.
    for (int vertex = 0; vertex < n; ++vertex) {
        if (graph[vertex].size() <= 1) {
            queue.push(vertex);
        }
    }

    // Continue processing until the queue is empty.
    while (!queue.empty()) {
        // Get the number of vertices in the current queue.
        int queueSize = queue.size();

        // Process all vertices in the current queue.
        for (int i = 0; i < queueSize; ++i) {
            int vertex = queue.front();
            queue.pop();

            // Debug output
            cout << "Processing vertex: " << vertex << endl;

            // Step 5a: Remove the vertex and its adjacent edges.
            for (int neighbor : graph[vertex]) {
                auto &neighbors = graph[neighbor];
                auto it = find(neighbors.begin(), neighbors.end(), vertex);
                if (it != neighbors.end()) {
                    neighbors.erase(it); // Erase using the iterator.
                }
            }

            for (int neighbor : graph[vertex]) {
                if (graph[neighbor].size() <= 1) {
                    queue.push(neighbor);
                }
            }
        }

        seconds++;
    }

    // Return the total seconds elapsed.
    return seconds;
}

int main() {
    int n = 4;
    vector<int> a = {0, 1, 2};
    vector<int> b = {1, 2, 0};
    int result = solution(n, a, b);
    cout << "Seconds required: " << result << endl; // Example usage
    return 0;
}
