#include <vector>
#include <iostream>

using namespace std;

 int main() {
    cout<<"enter nodes and edges"<<endl;
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> adj[n+1];

    for (int i=0; i<m; i++) {
        cout<<"enter connected nodes"<<endl;
        int u, v;
        cin>>u>>v;
        int w;
        cout<<"enter weight"<<endl;
        cin>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    for (int i=0; i<m; i++) {
        cout<<"Node and neightbouts with weights"<<endl;
        int s=adj[i].size();
        for (int j=0; j<s; j++) {
            cout<<"Element"<<endl;
            cout<<adj[i][j].first;
            cout<<adj[i][j].second;
            cout<<endl;
        }
    }

    return 0;
 }