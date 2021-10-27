#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>

using namespace std;

int bfs(int source, int sink, vector<int>& parent, vector<vector<int>>& residualGraph) {
    fill(parent.begin(), parent.end(), -1);
    int V = residualGraph.size();
    parent[source] = -2;
    queue<pair<int, int>> q;
    q.push({source, INT_MAX});

    while (!q.empty()) {
        int u = q.front().first;
        int capacity = q.front().second;
        q.pop();
        for (int av=0; av < V; av++) {
            if (u != av && parent[av] == -1 && residualGraph[u][av] != 0) {
                parent[av] = u;
                int min_cap = min(capacity, residualGraph[u][av]);
                if (av == sink)
                    return min_cap;
                q.push({av, min_cap});
            }
        }
    }
    return 0;
}

int ford_fulkerson(vector<vector<int>>& graph, int source, int sink) {
    vector<int> parent(graph.size(), -1);
    vector<vector<int>> residualGraph = graph;
    int min_cap = 0, max_flow = 0;
    while (min_cap = bfs(source, sink, parent, residualGraph)) {
        max_flow += min_cap;
        int u = sink;
        while (u != source) {
            int v = parent[u];
            residualGraph[u][v] += min_cap;
            residualGraph[v][u] -= min_cap;
            u = v;
        }
    }
    return max_flow;
}


int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>> graph(n, vector<int> (n, 0));
    while(m--)
    {
        int a,b,w;
        cin>>a>>b>>w;
        graph[a][b]=w;
    }

    
    cout << "Maximum Flow: " << ford_fulkerson(graph, 0, 5) << endl;
    return 0;
}