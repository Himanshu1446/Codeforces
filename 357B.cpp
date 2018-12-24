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
    int n,m;
    cin >>n>>m;
    int a[n]={0};
    for(int i=0;i<m;i++)
    {
        int f,s,t;
        cin >>f>>s>>t;
        if(a[f-1] >0)
        {
            if(a[f-1]==1)
            {
                a[s-1]=2;
                a[t-1] = 3;
            }
          else  if(a[f-1]==2)
            {
                a[s-1] =1;
                a[t-1] =3;
            }
          else   if(a[f-1] = 3)
            {
                a[s-1]=1;
                a[t-1] =2;
            }
        }
        else if(a[s-1] > 0)
        {
              if(a[s-1]==1)
            {
                a[f-1]=2;
                a[t-1] = 3;
            }
            else if(a[s-1]==2)
            {
                a[f-1] =1;
                a[t-1] =3;
            }
            else if(a[s-1] = 3)
            {
                a[f-1]=1;
                a[t-1] =2;
            }
        }
        else if(a[t-1] >0)
        {
              if(a[t-1]==1)
            {
                a[s-1]=2;
                a[f-1] = 3;
            }
          else   if(a[t-1]==2)
            {
                a[s-1] =1;
                a[f-1] =3;
            }
           else if(a[t-1] = 3)
            {
                a[s-1]=1;
                a[f-1] =2;
            }
        }
        else
        {
            a[f-1] =1 ,a[s-1]=2,a[t-1]=3;
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    
}
    
