//Print all the elements of the graph using DFS
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
const int N = 1e5+10;

vector<int> g[N];
bool vis[N];
vector<vector<int>> cc;
vector<int> current_cc;
void dfs(int vertex)
{
    vis[vertex]=true;
    current_cc.push_back(vertex);
    for(int child : g[vertex]){
        if(vis[child]) continue;
        dfs(child);
    }
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
    int ct=0;
    for(int i=1; i<=n; i++)
    {
         if(vis[i])continue;
         current_cc.clear();
         dfs(i);
         cc.push_back(current_cc);
         ct++;
    }
    cout << cc.size() << endl;
    for(auto c_cc : cc){
        for(int vertex : c_cc){
            cout << vertex << " ";
        }
        cout << endl;
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