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
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >>a[i][j];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(i%2==0)
           {
               if(a[i][j]=='.')
               {
                   if(j%2==0)
                       a[i][j] = 'B';
                   else
                       a[i][j] = 'W';
               }
                   
               
           }
            else
            {
                
               if(a[i][j]=='.')
               {
                   if(j%2==0)
                       a[i][j] = 'W';
                   else
                       a[i][j] = 'B';
               }
            }
        }
    }
    
       for(int i=0;i<n;i++)
     {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j];
        }
           cout<<"\n";
    }
    
    
}
