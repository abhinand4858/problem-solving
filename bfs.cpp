#include <bits/stdc++.h>
using namespace std;
int main()
{	
	int i,e,v,a,b,st,en,cur;
	//cout<<"Enter no of vertices:";
	cin>>v;
	//cout<<"No of edges:";
	cin>>e;

	vector<int> adj[v+1];

	//cout<<"Enter the edges";
	for(i-0;i<e;i++) {
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	//cout<<"Enter start and end to search";
	cin>>st>>en;

	vector<int> visited(v+1,0);
	queue<int> q;


	q.push(st);
	visited[st]=1;

	while(!q.empty()) {
		cur=q.front();
		q.pop();
		for(i=0;i<adj[cur].size();i++) {

			if(!visited[adj[cur][i]]) {
				q.push(adj[cur][i]);	
				visited[adj[cur][i]]=1;
			}
			
		}
	}

	if(!visited[en]) cout<<"Path does not exists";
	else cout<<"Path is found";


	return 0;
}
