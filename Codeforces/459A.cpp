#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
int main()
{
int x1, y1, x2, y2;
cin >> x1 >> y1 >> x2 >> y2;
if(x1 == x2)
{
    int diff = abs(y1 - y2);
    cout << x1+diff << " " << y1 << " " << x2+diff << " " << y2 << endl;
}
else if(y1 == y2)
{
    int diff = abs(x1 - x2);
    cout << x1 << " " << y1+diff << " " << x2 << " " << y2+diff << endl;
}
else if(abs(x1-x2) == abs(y1-y2))
{
    cout << x2 << " " << y1 << " " << x1 << " " << y2 << endl;
}
else
{
    cout << -1 << endl;
}
return 0;
}