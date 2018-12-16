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
 
     int ax,bx,cx,sum =0;
    cin >>ax>>bx>>cx;

    vector<int> prime;
    
    
    prime.push_back(2);
    prime.push_back(3);
    
    for(int  i=4 ;i<98;i++)
    {
        int flag=1;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
                flag=0;
            
        }
        if(flag==1)
            prime.push_back(i);
        
    }  
    int k;
    int aa[101][25]={0};
    
   
    
     for(int i=2;i<=100;i++)
    {
         k=i;
        for(int j=0;j<prime.size();j++)
        {
            
            if(prime[j] >k)
                break;
            if(k==1)
                break;

            while(k%prime[j]==0 )
            {
                ++aa[i][j];
                k = k/prime[j];
            }
            
        }
    }
    

    
    
    int total =1;
    for(int i=1;i<=ax;i++)
    {
        for(int j=1;j<=bx;j++)
        {
            for(int k=1;k<=cx;k++)
            {
                int total =1;
    
                for(int l=0;l<25;l++)
                {
                    total  = total * (aa[i][l] + aa[j][l] + aa[k][l] + 1);
                   
                }
                 sum = sum + total;
            }
        }
    }
    
    cout<<sum;
    
   
    
}
