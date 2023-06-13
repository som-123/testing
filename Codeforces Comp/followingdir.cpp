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
    string s;
    cin >> s;
    int x = 0, y=0, count= 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'L')
        {
            x = x-1;
        }
        if(s[i] == 'R')
        {
            x = x+1;
        }
        if(s[i] == 'U')
        {
            y = y+1;
        }
        if(s[i] == 'D')
        {
            y= y-1;
        }

        if(x == 1 && y == 1)
        {
            cout << "YES" << endl;
            count ++;
            break;
        }
    }
    if(count == 0)
    {
        cout << "NO" << endl;
    }
}
return 0;
}