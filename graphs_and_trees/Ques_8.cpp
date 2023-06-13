#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
const int N = 1e5+10;
const int M = 1e9+7;
vector<int> g[N];
int subtree_sum[N];
int val[N];
bool dfs(int vertex, int p=0)
{
    subtree_sum[vertex] += val[vertex];
    for(int child : g[vertex]){
        if(child == p)continue;
        
        dfs(child, vertex);
        subtree_sum[vertex] += subtree_sum[child];
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
    for(int i=1;i<=n;i++){
        int wt;
        cin >> wt;
        val[i]=wt;
    }
    dfs(1);
    
    ll ans =0;
    for(int i=2;i<=n;i++){
        int part1 = subtree_sum[i];
        int part2 = subtree_sum[1]-subtree_sum[i];
        ans = max(ans, (part1*1LL*part2)%M);
    } 
    cout << ans << endl;
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