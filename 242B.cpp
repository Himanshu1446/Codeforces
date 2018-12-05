#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{ 
   long long  n ,min = 1000000001,max=-1,temp,second=-1,index;
    cin >>n;
    long long a[n],b[n],c[n];
    for(long long  i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(b[i] > max)
            max = b[i];
        if(a[i] < min)
            min = a[i];
        c[i] = i+1;
    }
    for(long long i=0;i<n;i++)
    {
        if(a[i]==min)
        {
            if(b[i] > second ){
                second = b[i];
                index = i;
            }
        }
    }
    if(second == max)
        cout<<c[index];
    else
        cout<<"-1";
    
 
}