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
   int n,flag=1;
    cin >>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >>x;
        v.push_back(x);
    }
    int s = v.size();
    
    sort(v.begin(),v.end());
    for(int i=1;i< v[s-1]; i++)
    {
        if(i!=v[i-1])
        {
            cout<<i;
            flag=0;
            break;
        }
    }
    if(flag==1)
        cout<<v[s-1]+1;
    
}
    
