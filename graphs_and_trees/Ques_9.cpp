//BFS
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
const int N = 1e5+10;

vector<int> g[N];

int vis[N];
int level[N];
void bfs(int source)
{
    queue<int> q;
    q.push(source);
    vis[source] = 1;
    while(!q.empty()){
        int cur_v = q.front();
        q.pop();
        cout << cur_v << " ";
        for(int child : g[cur_v]){
            if(!vis[child]){
                q.push(child);
                vis[child] =1;
                level[child] = level[cur_v]+1;
            }
        }
    }
}  

int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n-1;i++){
        int v1, v2;
        cin >> v1 >> v2 ;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    bfs(1);

    for(int i=1; i<=n ;i++)
    {
        cout << i << ": " << level[i] << endl;
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



// 8 5
// 1 2
// 2 3
// 2 4
// 3 5
// 6 7