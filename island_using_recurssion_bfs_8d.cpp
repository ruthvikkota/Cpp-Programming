#include<iostream>
#include<queue>
using namespace std;

int m,n;
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
    int r[8]={-1,1,0,1,1,-1,0,-1};
    int c[8]={0,-1,1,1,0,1,-1,-1};
    for(int t=0;t<8;t++){
        if (issafe(i+r[t],j+c[t])) {
        bfs(i+r[t],j+c[t]);
        visited[i+r[t]][j+c[t]] = true;
    }
    }
}

int main() {
    cout<<"Enter the no. of rows: ";
    cin>>m;
    cout<<"Enter the no. of columns: ";
    cin>>n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout<<"Enter the elemnet in "<<i<<" row and "<<j<<" coloum:";
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
