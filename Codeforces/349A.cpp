#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
int main()
{
int n;
cin >> n;
int a[n];
for(int i=0;i<n;i++)
cin >> a[i];
int p=0, q=0, r=0, count=0;
for(int i=0;i<n;i++)
{
    if(a[i] == 25)
    {
        p++;
    }
    if(a[i] == 50)
    {
        q++;
        if(p >= 1)
        {
            p--;
        }
        else
        {
            count++;
            break;
        }
    }
    if(a[i] == 100)
    {
        r++;
        if(p>=1 && q>=1)
        {
            p--;
            q--;
        }
        else if(p >= 3)
        {
            p -= 3;
        }
        else
        {
            count++;
            break;
        }
    }
}
if(count == 0)
{
    cout << "YES" << endl;
}
else
{
    cout << "NO" << endl;
}
return 0;
}