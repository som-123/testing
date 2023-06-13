#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
int main()
{
int n, k;
cin >> n >> k;
int a[n];
for (int i = 0; i < n; i++)
{
    cin >> a[i];
}
sort(a, a + n);
if(k==0 && a[0]==1)
{
    cout << -1 << endl;
}
else if(k==0 && a[0]>1)
{
    cout << a[0]-1 << endl;
}
else
{
if(a[k-1] == a[k])
{
    cout << -1 << endl;
}
else
{
    cout << a[k-1] << endl;
}
}
return 0;
}