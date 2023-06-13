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
    string str;
    cin >> str;
    set<string> s;
    for(int i=0; i<n-1; i++)
    {
        cout << str[0] << endl;
        string s1(1,str[i]);
        string s2(1,str[i+1]);
        string str1 = s1 + s2;
        s.insert(str1);
    }
    for(auto& i : s)
    {
        cout << i << " ";
    }
}
return 0;
}