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
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+2; j <n; j++)
        {
            if(a[i] == a[j])
            {
                cout << "YES" << endl;
                count++;
                break;
            }
        }
        if(count > 0)
        break;
    }
    if(count == 0)
    {
        cout << "NO" << endl;
    }
}
return 0;
}