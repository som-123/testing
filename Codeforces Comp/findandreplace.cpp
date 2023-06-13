#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int n;
    cin >> n;
    string s;
    cin >>s;
    string bin;
    int alpha[26];
    int cnt=0;
    for(int i=0; i<26; i++)
    {
        alpha[i] = -100;
    }
    for(int i = 0; i < n; i++)
    {
        if(i%2 == 1)
        {
            bin += "1";
        }
        else
        {
            bin += "0";
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(alpha[(int)s[i]-97]==-100)
        {
            alpha[(int)s[i]-97] = bin[i]-48;
        }
        else if(alpha[(int)s[i]-97]!=(bin[i]-48))
        {
            cnt++;
            cout << "NO" << endl;
            break;
        }
    }
    if(cnt != 1)
    {
        cout << "YES" << endl;
    }
}
return 0;
}