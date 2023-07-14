#include<iostream>
#include<queue>
using namespace std;

int m, n;
int a[1000][1000];
bool visited[1000][1000];

bool issafe(int x, int y) {
    if (x >= 0 && y >= 0 && x < m && y < n && a[x][y] == 1 && visited[x][y] == false) {
        return true;
    }
    return false;
}

void bfs(int i, int j) {
    queue<pair<int,int>> q;
    q.push(make_pair(i, j));
    visited[i][j] = true;
    while (!q.empty()) {
        pair<int,int> cur = q.front();
        int x = cur.first;
        int y = cur.second;
        q.pop();
        if (issafe(x + 1, y)) {
            q.push({x + 1, y});
            visited[x + 1][y] = true;
        }
        if (issafe(x, y + 1)) {
            q.push({x, y + 1});
            visited[x][y + 1] = true;
        }
        if (issafe(x - 1, y)) {
            q.push({x - 1, y});
            visited[x - 1][y] = true;
        }
        if (issafe(x, y - 1)) {
            q.push({x, y - 1});
            visited[x][y - 1] = true;
        }
    }
}

int main() {
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            visited[i][j] = false;
        }
    }

    int count = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1 && visited[i][j] == false) {
                bfs(i, j);
                count++;
            }
        }
    }

    cout << "The number of islands are: " << count << endl;

    return 0;
}
