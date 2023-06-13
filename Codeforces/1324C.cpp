#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
int main()
{
int t;
cin >> t;
while(t--)
{
    string s;
    cin >> s;
    int l = s.length();
    int indl = -1;
    for(int i = l-1; i >= 0; i--)
    {
        if(s[i] == 'R')
        {
            indl = i;
            break;
        }
    }
    int indp = -1, d=0;
    for(int i =0; i < l; i++)
    {
        if(s[i] == 'R')
        {
            d = max(d,i-indp);
            indp = i;
        }
    }
    if(indl == -1)
    cout << l+1 << endl;
    else
    cout << max(d , l-indl) << endl;
}
return 0;
}