#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{   
    int n ,max=0 ,count=1;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >>a[i];
    if(n==1)
        cout<<"1";
    else{ 
            for(int i=0;i<n-1;i++)
            {
                if(a[i]<=a[i+1])
                    ++count;
                else
                {
                   
                    if(count > max)
                        max = count;
                     count=1;
                }
            }
        if(count > max)
            max = count;
        cout<<max;
        }
    
}