#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
int main()
{
    //inp: x^x = 0     x^0 d= x

    //Swapping two no.s
    int a=4, b=6;
    a= a^b;
    b= b^a; // b-->a
    // b=b^(a^b) == a^(b^b)
    a=a^b;
    // a= (a^b)^a = (a^a)^b
    cout << a << " " << b << endl;
    
    return 0;
}