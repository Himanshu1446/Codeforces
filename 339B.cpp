#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{
    long long  n,m,time=0;
    cin>>n>>m;
    long long a[m];
    for(long long i=0;i<m;i++)
        cin>>a[i];
    time = a[0]-1;
    for(long long  i=1;i<m;i++)
    {
        if(a[i]>=a[i-1])
            time =time + a[i]-a[i-1];
        else
            time = time + n - a[i-1] + a[i];        
        
    }
    cout<<time;
    
}
