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
    ll n, q;
    cin >> n >> q;
    ll a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum[n];
    sum[0]=a[0];
    for(int i = 1; i < n; i++)
    {
        sum[i] = sum[i-1]+a[i];
    }
    while(q--)
    {
        ll l, r, k;
        cin >> l >> r >> k;
        ll m  = sum[l-2]+(sum[n-1]-sum[r-1])+(r-l+1)*k;
        if(m%2==0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" <<endl;
        }
    }
}
return 0;
}