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
    ll a[n];
    ll neg = 0, sum=0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] < 0)
        {
            neg++;
        }
        sum += abs(a[i]);
    }
    int min =abs(a[0]);
    for(int i = 1; i < n; i++)
    {
        if(abs(a[i])<min)
        {
            min = abs(a[i]);
        }
    }
    if(neg%2==0)
        cout << sum << endl;
    else
        cout << sum-(2*min) << endl;

}
return 0;
}