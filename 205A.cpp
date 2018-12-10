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
    vector<long> v;
    long long pl[n];
    for(long long  i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
        pl[i] = x;
    }
    sort(v.begin(),v.end());
    for(long long  i=0;i<n;i++)
    {
        if(v[0]==v[i])
            ++count;
        if(count>=2)
            break;
    }
   if(count>=2)
       cout<<"Still Rozdil";
    else
    {
        for(long long i=0;i<n;i++)
        {
            if(pl[i]==v[0]){
                cout<<(i+1);
            break;
            }
        }
    }
  
}
