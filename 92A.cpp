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
   int n,k,sum=0,flag=1;
    cin >>n>>k;
    
    while(flag)
    {
        for(int i=1;i<=n;i++)
        {
            if(k >=i)
                k=k-i;
            else{
                flag=0;
                break;
            }
        }
    }
    cout<<k;

    
}
    
