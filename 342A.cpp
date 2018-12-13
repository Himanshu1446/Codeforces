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
    int a[6]={0};
    for(int i=0;i<n;i++)
    {
        cin >>x;
        if(x==0 ||x==7 ||x==5)
        {
            
            flag=1;
            break;
        }
        else
        {
            ++a[x-1];
        }
        
    }
    if(flag==0)
        {
            int first = min(min(a[0], a[1]),a[3]);
            a[0] = a[0] - first;
            a[1] = a[1] - first;
            a[3] = a[3] - first;
            int second = min(min(a[0], a[1]),a[5]);
            a[0] = a[0] - second;
            a[1] = a[1] - second;
            a[5] = a[5] - second;
            int third = min(min(a[0], a[2]),a[5]);
        
            if(3*(first + second + third)== n)
            {
                while(first--)
                    cout<<"1 2 4 \n";
                
                while(second--)
                    cout<<"1 2 6 \n";
                
                while(third--)
                    cout<<"1 3 6 \n";
            }
            else
            {
                cout<<"-1";
            }
            
        }
        else
        {
            cout<<"-1";
        }
       
    
  
}
