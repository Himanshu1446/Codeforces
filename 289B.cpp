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
 int n,m,d,flag=0,op=0;
    cin >>n>>m>>d;
    
vector<int> v;
    for(int i=0;i<n*m;i++)
    {
        int x;
        cin >>x;
        v.push_back(x);
    }
    
    sort(v.begin(),v.end());
    int r = v[0]%d;
    for(int i=0;i<m*n;i++)
    {
        if((v[i]%d)!=r)
            flag=1;    
    }
    
    if(flag==1)
        cout<<"-1";
    else
    {
        int len = v.size();
        
        int middle = len /2;
        middle = v[middle];
        
        for(int i=0;i<len;i++)
        {
            op = op + (abs(middle - v[i]))/d;
        }
        
        cout<<op;
        
        
    }
    
}
