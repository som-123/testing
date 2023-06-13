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
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int count = 0, mx = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == 0){
            count ++;
        }
        else{
            count=0;
        }
        mx = max(mx, count);
    }
    cout << mx << endl;
}
return 0;
}