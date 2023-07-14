#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> graph;

void bfs(bool visited[], int size) {
    int s;
    cout<<"Root Node: ";
    cin>>s;
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (!q.empty()) {
        int i = q.front();
        q.pop();
        for (int j = 0; j < graph[i].size(); j++) {
            if (!visited[graph[i][j]]) {
                q.push(graph[i][j]);
                visited[graph[i][j]] = true;
            }
        }
        cout << i << " ";
    }
}

int main() {
    int v;
    cout << "Number of vertices: ";
    cin >> v;
    int e;
    cout << "Number of edges: ";
    cin >> e;


    graph.resize(v + 1); 

    for (int i = 0; i < e; i++) {
        cout<<"Enter the vertices of edge-"<<i;
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    bool visited[v + 1];
    memset(visited, false, sizeof(visited));

    bfs(visited, v + 1);

    return 0;
}
