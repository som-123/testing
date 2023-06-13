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
     cin >>n;
     int a[n];
     int mn = INT_MAX;
     int odd = 0;
     for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]<mn){
            mn = a[i];
        }
        if(a[i]%2 != 0){
            odd++;
        }
     }
     if(mn %2 == 0 && odd >0)
        cout << " NO" << endl;
    else
    cout << "YES" << endl;
}
return 0;
}