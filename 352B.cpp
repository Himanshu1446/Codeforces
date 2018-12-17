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
   int n,x;
    cin >>n;
    int index[100001]={0};
    int differ[100001] ={0};
    int count[100001] = {0};
    
    for(int i=1;i<=n;i++)
    {
        cin >>x;
        
        if(count[x]==0)
        {
            index[x] = i;
        }
        else if(count[x]==1)
        {
            differ[x] = i - index[x];
            index[x] = i;
            
        }
        else if(count[x] >=2)
        {
            if( differ[x] == (i - index[x]))
            {
                index[x] = i;
               
            }
            else
            {
                count[x] = -1000001;
            }
        }
        ++count[x];  
    }
    int num=0;
    for(int i=1;i<100001;i++)
    {
        if( count[i]>0)
            ++num;
        
    }
    cout<<num<<endl;
    for(int i=1;i<100001;i++)
    {
        if( count[i]>0)
        {
            if(count[i]==1)
                cout<<i<<" 0"<<endl;
            else
                cout<<i<<" "<<differ[i]<<endl;
        }
    }
    
    
}
