#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
int main()
{
int t;
cin >> t;
while(t--)
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[n];
    }
    sort(a, a+n);
    pair<int, int> p[n/2];
    int s[n/2];
    for(int i = 0,j=0; i < n-1; i+=2, j++)
    {
        if(i!=n-1)
        p[j].first = a[i];
        p[j].second = a[i+1];
        s[j] = abs(a[i]-a[j]);
    }
    int i, j;
    for (i = 0; i < n/2 - 1; i++)
    {
        for (j = 0; j < n/2 - i - 1; j++)
        {
            if (s[j] > s[j + 1])
            {
                int temp = s[j];
                s[j+1] = s[j+1];
                s[j+1] = temp;
                swap(p[j], p[j+1]);
            }
        }
    }
    if(n%2 == 0)
    {
        for(int i = 0; i < n/2; i++)
        {
            cout << p[i].first << " " << p[i].second << " ";
        }
    }
    else
    {

    }
}
return 0;
}