#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{
   int n,m,x,sum=0;
    cin>>n>>m;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++)
    {
        if(v[i]<0)
            sum = sum -v[i];
    }
    cout<<sum;
    
}
