#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{ 
    int n,count=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            long double c = i*i +j*j;
            c = sqrt(c);
            if((c - floor(c))==0 && c<=n)
                ++count;
        }
        
    }
    cout<<count/2;
    
    
    
}