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
    int ind = n/2;
    for(int i = 0; i < n/2; i++)
    {
        if(s[i] == s[n-i-1])
        {
            ind = i;
            break;
        }
    }
    if(n%2 == 0)
    {
        cout << (n/2-ind)*2 << endl;
    }
    else
    {
        cout << (n/2-ind)*2+1 << endl;
    }
}
return 0;
}