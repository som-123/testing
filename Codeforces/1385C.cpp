#include <bits/stdc++.h>
#include <iostream>
#include <vector>
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
    vector<int> a;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int count = 0;
    for(int i = n-1; i > 0; i--)
    {
        if(a[i] > a[i-1])
        {
            for(int j = i-1; j > 0; j--)
            {
                if(a[j] < a[j-1])
                {
                    count++;
                    cout << j << endl;
                    break;
                }
            }
            break;
        }
    }
    if(count == 0)
    {
        cout << 0 << endl;
    }
}
return 0;
}