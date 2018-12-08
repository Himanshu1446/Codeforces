#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{ 
    int flag=0,count=0,flag2=0;
    char a[4][4];
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
        {
            cin>>a[i][j];
        }
    
    for(int i=0;i<=2;i++)
    {
       
        for(int j=0;j<=2;j++)
        {
             count=0;
             flag2=0;
            if(a[i][j]=='#'){
                ++count;
            }
            else
                ++flag2;
            
            if(a[i+1][j]=='#')
                ++count;
            else
                ++flag2;
            
            if(a[i+1][j+1]=='#')
                ++count;
            else
                ++flag2;
            
            if(a[i][j+1]=='#')
                ++count;
            else
                ++flag2;
            
            if(count>=3 || flag2>=3)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==1)
        cout<<"YES";
    else
        cout<<"NO";
    
    
}