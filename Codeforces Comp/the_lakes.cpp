
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
int n,m,sum;
int a[1001][1001];
vector<pair<int,int>> movements = {
    {0,1},{0,-1},{1,0},{-1,0}
};
bool isValid(int i, int j){
    return i>0 && j>0 && i<=n && j<=m;
}
int dfs(int v_x, int v_y)
{
    for(auto movement : movements){ 
        int c_x = movement.first+v_x;
        int c_y = movement.second+v_y;
        if(!isValid(c_x, c_y))continue;
        if((a[c_x][c_y])==0)continue;
        sum += a[c_x][c_y];
        a[c_x][c_y]=0;
        dfs(c_x, c_y);
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=m; j++){
            cin >> a[i][j];
        }
    }
    int mx = 0;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=m; j++){
         if(a[i][j]==0)continue;
         sum=0;
         sum += a[j][j];
         a[i][j]=0;
         mx = max(mx, dfs(i,j));
        }
    }
    cout << mx << endl; 
    }
    return 0;
}