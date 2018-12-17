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
    int a[100001]={0},d[100001]={0},p[100001]={0};
    int n,m;
    cin>>n>>m;
    
    for(int i=1;i<=n;i++)
    {
        cin >>a[i];
    }
    
    for(int i=n;i>=1;i--)
    {
        if(p[a[i]]!=1)
        {
            if(i==n)
                ++d[i];
            else
            d[i] = d[i+1] + 1;
            
            p[a[i]] =1;
        }
        else
            d[i] = d[i+1];
    }
    for(int i=1;i<=m;i++)
    {
        int x;
        cin >>x;
        cout<<d[x]<<endl;
    }
    
}
