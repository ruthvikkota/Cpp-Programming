#include<bits/stdc++.h>
using namespace std;

void dfs(int curnode,vector<int>graph[],bool visited[]){
	visited[curnode]=true;
    cout<<curnode<<" ";
	for(int j=0;j<graph[curnode].size();j++){
		if(visited[graph[curnode][j]]==false){
			dfs(graph[curnode][j],graph,visited);
		}
	}
}

int main(){
	int m,n;
    cout<<"Enter the no. of vertex: ";
    cin>>m;
    cout<<"Enter the no. of edges: ";
    cin>>n;
	vector<int> graph[m+1];
	for(int i=0;i<n;i++)
	{
		int x,y;
        cout<<"Enter the edge-"<<i<<":";
		cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	bool visited[m+1];
	memset(visited,false,sizeof(visited)/sizeof(visited[0]));
	int curnode=0;
    cout<<"The depth first search order is: \n";
	dfs(curnode,graph,visited);
}
