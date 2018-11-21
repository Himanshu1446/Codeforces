

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{  
   int m,n,x;
    cin>>m>>n;
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i<m;i++)
    {
        cin >>x;
        v1.push_back(x);
        
    }
    for(int i=0;i<n;i++)
    {
        cin >>x;
        v2.push_back(x);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    x = max(v1[0]*2 , v1[m-1]);
    if(x < v2[0])
        cout<<x;
    else
        cout<< -1;
    return 0;
}