#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
const int N  = 1e5+10;
int parent[N]; 
int Size[N];
multiset<int> sizes;

void make(int v){
    parent[v] = v;
    Size[v] = 1;
    sizes.insert(1);
}
int find(int v){
    if(v == parent[v]) return v;
    return parent[v] = find(parent[v]);
}
void merge(int a, int b){
    sizes.erase(sizes.find(a));// so that only one a is removed
    sizes.erase(sizes.find(b));
    sizes.insert(Size[a],Size[b]);
}
void Union(int a, int b){
    a= find(a);
    b= find(b);
    if(a!=b){
        // Union by size
        if(Size[a] < Size[b])
        swap(a,b);
        parent[b] = a;merge(a,b);
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
        if(sizes.size() == 1){
            cout << 0 << endl;
        }
        else{
            int mn = *(sizes.begin());
            int mx = *(--sizes.end());
            cout << mx-mn << endl;
        }
    }
return 0;
}