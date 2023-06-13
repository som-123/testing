#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
void printBinary(int num)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}
int main()
{
    int num;
    cin >> num;
    printBinary(num);
    int i;
    cin >> i;
    if((num &(1<<i)) != 0)
    {
        cout << "ith bit is set" << endl;
    }
    else
    {
        cout << "ith bit is not set" << endl;
    }
    //Set a Bit
    printBinary(num | (1<<i));
    //Unset a Bit
    printBinary(num & ~(1<<i));
    //toggle
    printBinary(num ^ (1<<i));
    //No. of set bits
    int ct=0;
    for(int j = 31; j>=0; j--)
    {
        if((num &(1<<j)) != 0)
        {
            ct++;
        }
    }
    cout << ct << endl;
    //can also use to fin no. of set bits
    cout << __builtin_popcount(num) << endl;//only for int not for ll
    
    return 0;
}