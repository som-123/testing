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
string s ="codeforces";
while(t--)
{
    char c;
    cin >> c;
    if(c=='c' || c=='o' || c=='d' ||c=='e' || c=='f' || c=='r' || c=='s')
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