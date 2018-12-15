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
  int n,a[1001]={0},x,flag=0;
    cin >>n;
    
    for(int i=0;i<n;i++)
    {
        cin >>x;
        ++(a[x]);
        
    }
    
        for(int i=0;i<1001;i++)
        {
            if(a[i] > ceil(n/2.0))
            {
                flag=1;
                break;
            }
        }
            
    if(flag==1 && n!=1)
        cout<<"NO";
    else
        cout<<"YES";
}
