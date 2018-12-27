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
    int n,flag=1,count=2,m=0;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >>a[i];
    
    if(n<=2)
        cout <<n;
    else
    {
        for(int i=2;i<n;i++)
        {
            if(a[i] ==a[i-1] + a[i-2])
            {
                ++count;
            }
            else
            {
                if(count > m)
                    m = count;
                
                count=2;
            }
        }
        cout << max(count,m);
    }
    
}
    
