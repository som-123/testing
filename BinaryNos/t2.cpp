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

// Direct XOR of all numbers from 1 to n (1^2^......^n)
int computeXOR(int n)
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    else
        return 0;
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < 8; i++)
    {
        printBinary(i);
        if(i&1)// if lsb is odd number is odd else even number
        {
            cout << "odd" << endl;
        }
        else
        {
            cout << "even" << endl;
        }
    }
    cout << (n>>1) << endl;//divide by 2
    cout << (n<<1) << endl;//multiply by 2

    //Binary of Characters
    for(char c= 'A'; c<='E'; c++)
    {
        cout << c << endl;
        printBinary(int(c));
    }
    for(char c= 'a'; c<='e'; c++)
    {
        cout << c << endl;
        printBinary(int(c));
    }
    //only 5th bits is set in lower case lettter rest all is same
    // so to convert we only need to convert 5th bit
    char A = 'A';
    char a = A | (1 << 5);//upper to lower we need to set
    cout << a << endl;
    cout << char(a & (~(1<<5))) << endl;//lower to upper we need to unset
    cout << (1<<5) << endl;//this is space
    cout << (A | ' ') << endl;//we can convert upper to lower by doing or with space
    cout << ~(1<<5) << endl; //this is underscore
    cout << ('a'&'_') << endl; //conert lower to upper
    return 0;
}