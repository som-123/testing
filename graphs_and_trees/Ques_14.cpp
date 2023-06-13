//floyd warshall algorithm
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
const int N= 510;
const int INF = 1e9+10;

int dis[N][N];

int main()
{
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i==j) dis[i][j]=0;
            else dis[i][j]=INF;
        }
    }
    int n, m;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int x, y, wt;
        cin >> x >> y >> wt;
        dis[x][y]= wt;
    }
    for(int k = 1; k <=n; k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n; j++){
                dis[i][j] = min(dis[i][j], dis[i][k]+dis[k][j]);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n; j++){
            if(dis[i][j] == INF) cout << "I ";
            else cout << dis[i][j] << " ";
        }
        cout << endl;
    }
return 0;
}