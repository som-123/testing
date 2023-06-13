#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
int main()
{
int n, m;
cin >> n >> m;
char a[n][m], b[n][m];
for(int i=0; i<n; i++)
{
    for(int j=0; j<m; j++)
    {
        cin >> a[i][j];
    }
    if(i%2==0)
    {
        for(int j=0; j<m; j++)
        {
            if(j%2 == 0)
            {
                b[i][j] = 'B';
            }
            else
            {
                b[i][j] = 'W';
            }
        }
    }
    else
    {
        for(int j=0; j<m; j++)
        {
            if(j%2 == 0)
            {
                b[i][j] = 'W';
            }
            else
            {
                b[i][j] = 'B';
            }
        }
    }
}
for(int i=0; i<n; i++)
{
    for(int j=0; j<m; j++)
    {
        if(a[i][j] == '.')
        {
            cout << b[i][j];
        }
        else if(a[i][j] == '-')
        {
            cout << "-";
        }
    }
    cout << endl;
}
return 0;
}