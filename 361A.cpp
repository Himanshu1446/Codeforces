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
   int n,k;
    cin >>n>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                cout<< k-n+1<<" ";
            else
                cout<<"1 ";
        }
        cout<<endl;
    }
}
    
