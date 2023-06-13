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
    int a, b, c;
    cin >> a >> b >> c;
    if(a+b == c)
    {
        cout << "+" << endl;
    }
    else if(a-b == c)
    {
        cout << "-" << endl;
    }
}
return 0;
}