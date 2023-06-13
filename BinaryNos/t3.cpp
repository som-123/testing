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
    printBinary(59);
    int a=59;
    int i = 4;
    //clear lsb till ith index
    cout << (a & (~((1<<(i+1) - 1)))) << endl;//to find 11110000 we found 00001111 by decreasing 1<(i+1)[00010000] by 1 which is 00001111
    //clear msb till ith index
    cout << (a & ((1<<(i+1) - 1))) << endl;
     
     //find weather is 2s power or not
    int n = 14;
    if(n & (n-1)) // ifno is pow of 2 ther no will be of type 00000100000 and its n-1 will be 0000011111 and bots and will be 0
    {
        cout << "not power of 2" << endl;
    }
    else
    {
        cout << "power of 2" << endl;
    }
    return 0;
}