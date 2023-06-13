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
    int a[n];
    int eve=0, odd=0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]%2 == 0)
        {
            eve+= a[i];
        }
        else
        {
            odd+= a[i];
        }
    }
    if(eve > odd)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
return 0;
}