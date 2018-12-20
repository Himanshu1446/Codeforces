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
   long long  n,k,profit;
    cin >>n>>k;
    long long max = -1000000001;
    
    for(long long i=0;i<n;i++)
    {
        long long j,t;
        cin >>j>>t;
        if(k >=t)
            profit = j;
        else
            profit = j - t +k;
        
        if(profit > max)
            max = profit;
        
    }
    cout<<max;
    
    
}
    
