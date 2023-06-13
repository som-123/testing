//To find weather loo[ exists or not
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
const int N = 1e5+10;

vector<int> g[N];
bool vis[N];
bool dfs(int vertex, int par)
{
    vis[vertex]=true;
    bool isLoopExists = false;
    for(int child : g[vertex]){
        if(vis[child] && child == par)continue;
        if(vis[child]) return true;
        isLoopExists |= dfs(child, vertex);
    }
    return isLoopExists;
}  

int main()
{
    int n, e;
    cin >> n >> e;
    for(int i=0;i<e;i++){
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    } 
    bool isLoopExists = false;
    for(int i=1; i<=n; i++)
    {
         if(vis[i])continue;
         if(dfs(i,0));
         {
            isLoopExists = true;
            break;
         }
    }
    cout << isLoopExists << endl;
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



// 8 5
// 1 2
// 2 3
// 2 4
// 3 5
// 6 7