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
  long long  y,k,n,x,i=0,flag=0;
    cin >>y>>k>>n;
    
    while(1)
    {
         x = k*i - y;
        if(x + y >n)
        {
            break;
        }
       
        if(x > 0){
            cout<<x<<" ";
            flag =1;
        }
        ++i;
        
    }
    if(flag==0)
        cout<<"-1";
    
    
  
}
