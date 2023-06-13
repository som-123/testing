#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
int main()
{
int t;
cin >> t;
while(t--)
{
    int n, k;
    cin >> n >> k;
    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    pair<int, int> p[n];
    for(int i=0; i<n; i++){
        p[i] = {a[i], i};
    }
    sort(p,p+n);
    for(int i=0; i<n; i++){
        cout << p[i].first << " " << p[i].second << endl;
    }
    sort(b, b+n);
    for(int i=0; i<n; i++){
        cout << b[p[i].second] << " ";
    }
    cout << endl;
}
return 0;
}