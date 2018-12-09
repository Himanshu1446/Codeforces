#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{
   int n,m,max=-1,count=0;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    cin>>m;
    int b[m];
    
    for(int i=0;i<m;i++)
        cin>>b[i];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(b[j]%a[i]==0)
            {
                if(max == (b[j]/a[i]))
                    ++count;
                if((b[j]/a[i]) > max)
                {
                    max = (b[j]/a[i]);
                    count=0;
                }
                    
            }
        }
    }
    cout<<count+1;
    
}
