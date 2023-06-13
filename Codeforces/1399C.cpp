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
    int w[n];
    for(int i=0; i<n; i++)
    {
        cin >> w[i];
    }
    sort(w, w+n);
    int ans = 0;
    for(int i=1; i<=100; i++)
    {
        int j=0, k=n-1, ct=0;
        while(k>j)
        {
            if(w[j]+w[k] == i)
            {
                j++, k--;
                ct++;
            }
            else if((w[j]+w[k]) < i)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
        ans = max(ct, ans);
    }
    cout << ans << endl;
}
return 0;
}