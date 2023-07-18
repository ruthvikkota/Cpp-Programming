#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
vector<int>graph[1001];
int flag=0;
void cycledec(int curnode, int parent, bool visited[]) {
    if(flag==1){
        return;
    }
    visited[curnode] = true;
    for (int j = 0; j < graph[curnode].size(); j++) {
        if (visited[graph[curnode][j]]==true && graph[curnode][j] != parent) 
        {
            cout<<curnode<< " -> "<< graph[curnode][j] << " -> "<< parent<<endl;
            flag=1;
        }
        else if (visited[graph[curnode][j]] == false) {
            cycledec(graph[curnode][j], curnode, visited);
        }
    }
}

int main() {
    int m, n;
    cout << "Enter the no. of vertex: ";
    cin >> m;
    cout << "Enter the no. of edges: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cout << "Enter the edge-" << i << ":";
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    bool visited[m + 1];
    memset(visited, false, sizeof(visited) / sizeof(visited[0]));
    int curnode = 0;
    cycledec(curnode,-1, visited);
    if(flag==1){
        cout<<"Cycle found";
    }
    else{
        cout<<"Cycle not found";
    }
}
