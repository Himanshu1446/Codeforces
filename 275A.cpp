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
    int a[3][3],x;
    int b[3][3]={{1,1,1},{1,1,1},{1,1,1}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>x;
            x = x%2;
            a[i][j] = x;
        }
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]==1)
            {
                b[i][j]=1 - b[i][j];
                if(i+1 < 3)
                    b[i+1][j] = 1 - b[i+1][j];
                
                if(j+1 < 3)
                    b[i][j+1] = 1 - b[i][j+1];
                
                if(i-1 >= 0)
                    b[i-1][j] = 1 - b[i-1][j];
                
                if(j-1 >= 0)
                    b[i][j-1] = 1 - b[i][j-1];
            }
        }
    }
    
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<b[i][j];
        }
         cout<<endl;
    }
    
}
