// maximum sum of sub_array of size K

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin >> s;
    string k;
    cin >> k;
    map<char, int> mp;
    for (int i = 0; i < k.length(); i++)
    {
        mp[k[i]]++;
    }
    int i = 0, j = 0, count = mp.size(), mn = INT_MAX;
    while (j < s.length())
    {
        while (count > 0)
        {
            if (mp.find(s[j]) != mp.end())
            {
                mp[s[j]]--;
                if (mp[s[j]] == 0)
                {
                    count--;
                }
            }
            j++;
        }
        while (count == 0)
        {
            mn = min(mn, j - i + 1);
            if (mp.find(s[i]) != mp.end())
            {
                mp[s[i]]++;
                if (mp[s[i]] == 0)
                {
                    count++;
                }
            }
            i++;
        }
    }
    cout << mn << endl;
    return 0;
}