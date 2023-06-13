#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
const int N = 510;
const int INF = INF;

ll dis[N][N];

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> dis[i][j];
        }
    }
    vector<int> del_order(n);
    for(int i =0; i<n; i++){
        cin >> del_order[i];
    }
    reverse(del_order.begin(), del_order.end());
    vector<ll> ans;
    for(int k=0; k<n; k++){
        int k_v = del_order[k];
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                ll new_dis = dis[i][k_v] + dis[k_v][j];
                dis[i][j] = min(dis[i][j], new_dis);
            }
        }
        ll sum =0;
        for(int i = 0; i<=k; i++){
            for(int j = 0; j<=k; j++){
                sum += dis[del_order[i]][del_order[j]];
            }
        }
        ans.push_back(sum);
    }
    reverse(ans.begin(), ans.end());
    for(auto val : ans){
        cout << val << " ";
    }
return 0;
}