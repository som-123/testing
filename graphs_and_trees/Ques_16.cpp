#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
const int N  = 1e5+10;
int parent[N]; 
int Size[N];

void make(int v){
    parent[v] = v;
    Size[v] = 1;
}
int find(int v){
    if(v == parent[v]) return v;
    return parent[v] = find(parent[v]);
}
void Union(int a, int b){
    a= find(a);
    b= find(b);
    if(a!=b)
    {
        // Union by size
        if(Size[a] < Size[b])
        swap(a,b);
        parent[b] = a;
        Size[a] += Size[b];
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    for(int i=1; i <=n; i++)
    {
        make(i);
    }
    while(k--){
        int u, v;
        cin >> u >> v;
        Union(u ,v);
    }
    int connected_ct = 0;
    for(int i=1; i<=n; i++)
    {
        if(find(i) == i) connected_ct++;

    }
return 0;
}