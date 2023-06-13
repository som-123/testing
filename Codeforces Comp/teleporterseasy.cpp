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
    ll a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] += i+1;
    }
    sort(a,a+n);
    ll sum =0, count =0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
        if(sum > c)
        {
            break;
        }
        else
        {
            count++;
        }
    }
    cout << count << endl;
}
return 0;
}