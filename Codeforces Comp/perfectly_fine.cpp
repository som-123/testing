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
    int n;
    cin >> n;
    vector<pair<int,string> > a;
    for(int i=0; i<n; i++){
        int x;
        string y;
        cin >> x >> y;
        a.push_back({x,y});    
    }
    int mn11 = 3e5+10, mn10 = 3e5+10, mn01 = 3e5+10;
    for(int i=0; i<n; i++){
        if(a[i].second == "11"){
            mn11 = min(a[i].first, mn11);
        }
        if(a[i].second == "10"){
            mn10 = min(a[i].first, mn10);
        }
        if(a[i].second == "01"){
            mn01 = min(a[i].first, mn01);
        }
    }
    ll ans = min(mn11 , mn01+mn10);
    if(mn11<3e5+10 && (mn01<3e5+10&&mn10<3e5+10))
    {
        cout << ans << endl;
    }
    else if(mn11 == 3e5+10 && (mn01<3e5+10&&mn10<3e5+10))
    {
        cout << mn01+mn10 << endl;
    }
    else if(mn11<3e5+10 && (mn01==3e5+10||mn10==3e5+10))
    {
        cout << mn11 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
return 0;
}