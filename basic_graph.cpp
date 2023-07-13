#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int v, e;
    cout << "Number of vertices: ";
    cin >> v;
    cout << "Number of edges: ";
    cin >> e;
    vector<vector<int>> graph(v);

    for (int i = 0; i < e; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for (int i = 0; i < v; i++) {
        cout << i << "->";
        for (int j = 0; j < graph[i].size(); j++) {
            cout << graph[i][j] << ",";
        }
        cout << "\n";
    }

    return 0;
}
