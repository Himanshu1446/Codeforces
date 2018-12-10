#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n],y[n],count=0,total=0,right=0,left=0,bottom=0,top=0;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n;i++)
    {
        right=0;
        top=0;
        left=0;
        bottom=0;
        for(int j=0;j<n;j++)
        {
            if(x[i]>x[j] && y[i]==y[j])
                right=1;
            if(x[i]<x[j] && y[i]==y[j])
                left=1;
            if(x[i]==x[j] && y[i]>y[j])
                top=1;
            if(x[i]==x[j] && y[i]<y[j])
                bottom=1;
            if(top && bottom && right && left)
            {
                ++count;
                break;
            }
            
        }
    }
    cout<<count;
}
