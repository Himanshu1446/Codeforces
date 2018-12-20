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
   int r,c,cell=0;
    cin >>r>>c;
    char a[r][c];
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cin >>a[i][j];
            
    }
   
    for(int i=0;i<r;i++)
    {
         int flag=1;
        for(int j=0;j<c;j++)
        {
            if(a[i][j]=='S')
                flag=0;
        }
        if(flag==1)
        {
        
            for(int j=0;j<c;j++)
            {
                if(a[i][j]!='O'){
                    ++cell;
                 a[i][j]='O';
                }
            }
            
        }
    }
    
    for(int i=0;i<c;i++)
    {
         int flag=1;
        for(int j=0;j<r;j++)
        {
            if(a[j][i]=='S')
                flag=0;
        }
        if(flag==1)
        {
        
            for(int j=0;j<r;j++)
            {
                if(a[j][i]!='O')
                    ++cell;
            }
            
        }
    }
    cout<<cell;
    
}
    
