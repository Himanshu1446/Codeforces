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
   int n;
    cin >>n;
    int a[n*n];
    for(int i=0;i<n*n;i++)
    {
     a[i] = i+1;   
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j%2==0)
            {
                cout<< a[n*j +i]<<" "<<a[n*(j+1) + n -1 - i]<<" ";
            }
        }
        cout<<endl;
    }
    
    
}
    
