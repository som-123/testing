#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long

void func(int n, vector<int> &v){
    int a, b;
    if(n%3 == 0){
    a=n/3;
    b=2*n/3;
    v.push_back(a);
    v.push_back(b);
    func(a,v);
    func(b,v);
    }
    else
    {
        return;
    }
}
int main()
{
int t;
cin >> t;
while(t--)
{
    int n, m;
    cin >> n >> m;
    vector<int> v;
    v.push_back(n);
    func(n, v);
    int ct = 0;
    for(int i=0; i<v.size(); i++)
    {
        if(m == v[i])
        {
            ct++;
            cout << "yes" << endl;
            break;
        }
    }
    if(ct == 0)
    {
        cout << "no" << endl;
    }
}
return 0;
}
