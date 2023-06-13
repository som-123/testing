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
    ll a[n], b[n];
    ll d[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i]+i+1;
        d[i] = a[i]+n-i;
    }
    sort(b,b+n);
    sort(d,d+n);
    ll sum =0, count =0, i=0, j=0;
    while(sum < c)
    {
        if(b[i] < d[j])
        {
            sum += b[i];
            i++;
        }
        if(b[i] >= d[j])
        {
            sum += d[j];
            j++;
        }
        count++;
    }
    cout << count-1 << endl;
}
return 0;
}