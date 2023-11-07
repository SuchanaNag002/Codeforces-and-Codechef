#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> &a, vector<int> &b) {
    int i, sec=0, len, node;
    queue<int> queue;
    unordered_map<int, vector<int>> adj;
    for (i = 0; i < a.size(); i++) 
    {
        adj[a[i]].push_back(b[i]);
        adj[b[i]].push_back(a[i]);
    }
    
    for (i = 0; i < n; i++) 
        if (adj[i].size() <= 1) 
            queue.push(i);

    while (!queue.empty()) {
        len = queue.size();
        for (i = 0; i < len; i++) {
            node = queue.front();
            queue.pop();
            for (int it : adj[node]) {
                auto &neighbors = adj[it];
                auto it1 = find(neighbors.begin(), neighbors.end(), node);
                if (it1 != neighbors.end()) {
                    neighbors.erase(it1); 
                }
            }

            for (int it: adj[node]) {
                if (adj[it].size() <= 1) {
                    queue.push(it);
                }
            }
        }

        sec++;
    }
    return sec;
}

int main() {
    int n = 4;
    vector<int> a = {0, 1, 2};
    vector<int> b = {1, 2, 0};
    int result = solution(n, a, b);
    cout << "Seconds required: " << result << endl; // Example usage
    return 0;
}
