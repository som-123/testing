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
    string a;
    cin >> a;
    string b, c;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == '0')
        {
            b += "0";
            c += "0";
        }
        else if(a[i] == '1' && count == 0)
        {
            b += "0";
            c += "1";
            count ++;
        }
        else if(a[i] == '2' && count == 0)
        {
            b += "1";
            c += "1";
        }
        else if(a[i] == '1' && count > 0)
        {
            b += "1";
            c += "0";
        }
        else if(a[i] == '2' && count > 0)
        {
            b += "2";
            c += "0";
        }

    }
    cout << b << endl << c << endl;
}
return 0;
}