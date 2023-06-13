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
    ll c;
    cin >> c;
    ll a[n], b[n], d[n], e[n-1];
    int min = 1e9, ind=0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i]+i+1;
        d[i] = a[i]+n-i;
        if(b[i] < min)
        {
            min= b[i];
            ind=i;
        }
    }
    for(int i = 0,j=0; i < n; i++)
    {
        if(i == ind)
        {
            continue;
        }
        else if(b[i] < d[i])
        {
            e[j] = b[i];
            j++;
        }
        else if(b[i] >= d[i])
        {
            e[j] = d[i];
            j++;
        }
    }
    sort(e,e+n-1);
    ll sum =min, i=0;
    for(i=0; sum <=c; i++)
    {
        sum += e[i];
    }
    cout << i << endl;
}
return 0;
}