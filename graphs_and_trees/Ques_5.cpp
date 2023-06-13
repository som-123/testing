// subtree sum and no. of even no. in it
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
const int N = 1e5+10;

vector<int> g[N];                                                                                                                                                                                        
int subtree_sum[N], even_ct[N];
bool dfs(int vertex, int par=0)
{
    if(vertex%2==0)
    {
        even_ct[vertex]++;
    }
    subtree_sum[vertex] += vertex;
    for(int child : g[vertex]){
        if(child == par)continue;
        dfs(child, vertex);
        subtree_sum[vertex] += subtree_sum[child];
        even_ct[vertex] += even_ct[child];
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
    int q;
    cin >> q;
    for(int i=1;i<=n;i++){
        cout << subtree_sum[i] << " " << even_ct[i] << endl;
    }
    // while(q--)
    // {
    //     int v;
    //     cin >> v;
    //     cout << subtree_sum[v] << " " << even_ct[v] << endl;
    // }
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