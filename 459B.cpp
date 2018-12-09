#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{ 
    long long  n,x,count=0;
    cin>>n;
    vector<int> a;
    for(long long  i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
        
    }
    sort(a.begin(),a.end());
    long long  max = a[n-1] - a[0], start=0,end=0;
    long long  index = n-1;
    for(long long  i=0;i<n;i++)
    {
        if(a[i]==a[0])
            ++start;
        if(a[i]==a[n-1])
            ++end;
    }
    cout<<max<<" ";
    if(start == n)
        cout<< (n*(n-1))/2;
    else
        cout<<start*end;
    
        
    }
    
