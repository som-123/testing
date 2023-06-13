#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
const int N = 1e5+10;

vector<int> g[N];
bool vis[N];

void dfs(int vertex)
{
    vis[vertex]=true;
    for(int child : g[vertex]){
        cout << "par" << vertex << ", child" << child;
        if(vis[child]) continue;
        dfs(child);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    for(int i=1; i<=n; i++)
    {
         if(vis[i])continue;
         dfs(i);
    }
    return 0;
}

// 6 9
// 1 3
// 1 5
// 3 5
// 3 4
// 3 6
// 3 2
// 2 6
// 4 6
// 5 6