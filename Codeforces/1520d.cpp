// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
int main()
{
ll t;
cin >> t;
while(t--)
{
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
    cin >> a[i];
    a[i] = a[i]-i;
    }
    ll count=1,sum=0;
    sort(a, a+n);
    for(ll i=0; i<n-1; i++)
    {
        if(a[i] == a[i+1])
        {
            count++;
        }
        else
        {
            sum += (count*(count-1))/2;
            count=1;
        }
    }
    sum += (count*(count-1))/2;
    cout << sum << endl;
}
return 0;
}