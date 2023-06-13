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
vector <int > a;
for(int i=1; i<1e5; i++)
{
    a.push_back(3*i*(i+1)/2);
}
while(t--)
{
    int n;
    cin >> n;
    while(n >= 2)
    {
        vector<int>::iterator upper;
        upper = upper_bound(a.begin(), a.end(), n);
        cout << (upper - a.begin()) << endl;
    }
}
return 0;
}