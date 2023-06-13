//diameter of tree
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
const int N = 1e5+10;

vector<int> g[N];
int depth[N];
bool dfs(int vertex, int par=0)
{
    for(int child : g[vertex]){
        if(child == par)continue;
        depth[child] = depth[vertex]+1;
        dfs(child, vertex);
    }
}  

int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n-1;i++){
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    } 
    dfs(1);
    int mx_depth=-1;
    int mx_node = 0;
    for(int i=1;i<=n;i++){
        if(mx_depth<depth[i]){
            mx_depth = depth[i];
            mx_node =i;
        }
        depth[i]=0;
    }
    dfs(mx_node);
    mx_depth = -1;
    for(int i=1;i<=n;i++)
    {
        if(mx_depth<depth[i]){
            mx_depth = depth[i];
        }
    }
    cout << mx_depth << endl;
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