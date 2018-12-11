#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int min = 1001,start , end;
    for(int i=0 ; i<n;i++)
    {
        if(i==n-1)
        {
            if(min > abs(a[i] - a[0])){
                min = abs(a[i] - a[0]);
                start = n;
                end = 1;
             }
        }
        else
            {
                if(min > abs(a[i] - a[i+1])){
                min = abs(a[i] - a[i+1]);
                start = i+1;
                end = i+2;
            }
    }
            
    
    }
    cout<<start<<" "<<end;
    
}
