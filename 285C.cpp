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
  long long  n ,x,op=0;
    cin >>n;
    vector<int> v;
    for(long long  i=0;i<n;i++)
    {
        cin >>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    
    for(long long  i=0;i<n;i++)
    {
        if(v[i] < 0)
        {
            op = op -(v[i]);
            v[i] = 0;
        }
        if(v[i]> n)
        {
            op = op + v[i] - n;
            v[i] = n;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        op = op + abs((i+1) - v[i]);
    }
    
    cout<<op;
    
}
