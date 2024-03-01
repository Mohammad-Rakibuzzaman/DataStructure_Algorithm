//adj list

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
// vector<int> adj [N];
vector<pair<int, int>> adj [N];

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        // int u, v;
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w}); //making pair
        
        // adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "List " << i << ": ";
        for(auto j: adj[i])
        // for(int j: adj[i])
        {
            // cout << j << " ";
            cout << "(" << j.first;
            cout << ", " << j.second << "),";
        }
        cout << endl;

    }





    return 0;
}