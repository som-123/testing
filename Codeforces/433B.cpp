#include <iostream>
using namespace std;
#define ll long long
int main()
{
ll n;
cin >> n;
ll v[n], s1[n], s2[n];
for (ll i = 0; i < n; i++)
{
    cin >> v[i];
}
s1[0]=v[0];
for (ll i = 0; i<n-1; i++)
{
    s1[i+1]=0;
    s1[i+1] = v[i+1]+s1[i];
}
sort(v, v + n);
s2[0]=v[0];
for (ll i = 0; i<n-1; i++)
{
    s2[i+1]=0;
    s2[i+1] = v[i+1]+s2[i];
}
ll m;
cin >> m;
for (ll i = 0; i<m; i++)
{
    ll type, l, r;
    cin >> type >> l >> r;
    if (type == 1)
    {
        if(l!=1)
        cout << s1[r-1] - s1[l-2] << endl;
        else
            cout << s1[r-1] << endl;
    }
    else
    {
        if(l!=1)
        cout << s2[r-1] - s2[l-2] << endl;
        else
            cout << s2[r-1] << endl;
    }
}
return 0;
}