#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{ 
    int n,k,x,count=0,flag2=0;
    cin>>n>>k;
    vector<int> a;
    
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);   
    }
    x = a[0];
    for(int i=0;i<n;i++)
    {
        if(x==a[i])
            ++count;
    }
    if(count==n)
        flag2=1;
    
    if(n==1||flag2==1)
        cout<<"0";
    else
    {
        int element = a[k-1],count=0,flag=0,op=0,index;
        count=0;
        
        for(int i=k-1;i<n;i++)
            if(element == a[i])
                ++count;
        
        if(count==n-k+1)
            flag=1;
        else
            flag=0;
            
        if(flag)
        {
            for(int i=k-2;i>=0;i--)
            {
                if(element !=a[i]){
                    index = i;
                    break;
                }
                    
                
            } 
        }
        if(flag==1)
            cout<<index+1;
        else
            cout<<"-1";
            
        
    }
    
    
    
}