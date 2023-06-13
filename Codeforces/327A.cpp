#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
int main()
{
int n;
cin >> n;
int a[n];
for(int i=0; i<n; i++)
{
    cin >> a[i];
}
int max = -1, zero= 0, one= 0;
for(int i=0; i<n; i++)
{
    if(a[i] == 1)
    {
        one += a[i];
        if(zero > 0)
        {
            zero--;
        }
    }
    else
    {
        zero++;
        if(zero > max)
        {
            max = zero;
        }
    }
}
cout << max + one << endl;
return 0;
}