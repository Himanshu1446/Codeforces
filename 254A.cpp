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
   int n,x,flag=0;
    cin >>n;
    int a[5001]={0},in[5001]={0},c[2*n + 1],d[5001]={0};
    
    for(int i=1;i<=2*n;i++)
    {
        cin >>c[i];
        ++a[c[i]];
    }
    for(int i=1;i<=5000;i++)
    {
        if(a[i]%2==1)
            flag=1;
    }
    if(flag==1)
        cout<<"-1";
    else
    {
        
     for(int i=1;i<=2*n;i++)
     {
                 x = c[i];
                 if(d[x]==0)
                 {
                     in[x] = i;
                      ++d[x];
                 }
                 else
                 {
                     cout<<in[x]<<" "<<i<<endl;
                     d[x] =0;

                 }
               
             
             }
    }
    
}
    
