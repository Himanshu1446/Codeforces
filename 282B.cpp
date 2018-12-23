#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{
    long n,sum1=0,sum2=0;
    cin >>n;
    char a[n];
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >>x>>y;
        if(abs(sum1 + x - sum2)> 500)
        {
            sum2 = sum2 + y;
            a[i] = 'G';
        }
        else
        {
            sum1 = sum1 + x;
            a[i] = 'A';
        }
    }
    if(abs(sum1 -sum2)<=500)
    {
        for(int i=0;i<n;i++)
            cout<<a[i];
    }
    else
        cout<<"-1";
}
    
