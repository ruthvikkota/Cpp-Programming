#include<iostream>
#include<queue>
using namespace std;

int m=3, n=3;
int a[1000][1000];
bool visited[1000][1000];

bool issafe(int x, int y) {
    if (x >= 0 && y >= 0 && x < m && y < n && a[x][y] == 1 && visited[x][y] == false) {
        return true;
    }
    return false;
}

void bfs(int i, int j) {
    visited[i][j] = true;
    if(a[i][j]==0){
        return;
    }
    if (issafe(i + 1, j)) {
        bfs(i+1,j);
        visited[i + 1][j] = true;
    }
    if (issafe(i, j + 1)) {
        bfs(i,j+1);
        visited[i][j + 1] = true;
    }
    if (issafe(i - 1, j)) {
        bfs(i-1,j);
        visited[i - 1][j] = true;
    }
    if (issafe(i, j - 1)) {
        bfs(i,j-1);
        visited[i][j - 1] = true;
    }
}

int main() {
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
