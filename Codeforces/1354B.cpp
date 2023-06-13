#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;
#define ll long long
int main()
{
int t;
cin >> t;
while(t--)
{
    string s;
    cin >> s;
    int n = s.length();
    set <char> st;
    for(int i = 0; i < n; i++)
    {
        st.insert(s[i]);
    }
    if(st.size() == 3)
    {
        int pos1=-1, pos2=-1, pos3=-1, ans=n, mx=0, mn=0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
                pos1 = i;
            if(s[i] == '2')
                pos2 = i;
            if(s[i] == '3')
                pos3 = i;
            if(pos1!= -1 && pos2!= -1 && pos3!= -1)
            {
                mn = min(min(pos1, pos2), pos3);
                mx = max(max(pos1, pos2), pos3);
                ans = min(ans, mx-mn+1);
            }
        }
        cout << ans << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}
return 0;
}