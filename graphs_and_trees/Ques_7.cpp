//find LCA
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
const int N = 1e5+10;

vector<int> g[N];
int par[N];
bool dfs(int vertex, int p=0)
{
    par[vertex]=p;
    for(int child : g[vertex]){
        if(child == p)continue;
        
        dfs(child, vertex);
    }
}  

vector<int> path(int v)
{
    vector<int> ans;
    while(v!=0){
        ans.push_back(v);
        v=par[v];
    }
    reverse(ans.begin(), ans.end());
    return ans;
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
    
    int x,y;
    cin >> x >> y;
    vector<int> path_x = path(x);
    vector<int> path_y = path(y);
    int l = min(path_x.size(), path_y.size());
    int lca=-1;
    for(int i = 0; i<l; i++)
    {
        if(path_x[i] == path_y[i]){
            lca = path_x[i];
        }
        else{
            break;
        }
    }
    cout << lca << endl;
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