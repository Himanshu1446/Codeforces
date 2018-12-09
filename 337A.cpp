#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{ 
    long long  n,x,min,p;
    cin>>x>>n;
    vector<int> a;
    for(long long  i=0;i<n;i++)
    {
        cin>>p;
        a.push_back(p);
        
    }
    min = a[n-1];
    sort(a.begin(),a.end());
    min = a[n-1];
    for(int i=0;i<=n-x;i++)
    {
        int val = a[i+x-1] - a[i];
      
        if(min > val)
            min = val;
    }
    
    cout<<min;
    
}
