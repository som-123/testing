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
    int n, x;
     cin >> n >> x;
     vector<int> a(n);
     for(int i = 0; i < n; i++)
     {
        int x;
        cin >> x;
        a.push_back(x);
     }
    sort(a.begin(), a.end(), greater<int>());
     int ind = -1, count = 0;
     double sum = 0;
     for(int i = 0; i < n ; i++)
     {
        sum += a[i];
        if((sum*1.0/(i+1)) < x)
        {
            ind = i;
            break;
        }
        else
        {
            count++;
        }
     }
     if(count == n)
     {
        cout << count << endl;
     }
     else
     {
        cout << ind << endl;
     }
}
return 0;
}