#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{
    int n,a,b,count=0;
    cin>>n>>a>>b;
    for(int i=a;i<n;i++)
    {
        if(b >= n-i-1)
            ++count;
    }
    cout<<count;
    
}
