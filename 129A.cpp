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
   int n,odd=0;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >>x;
        if(x%2==1)
            ++odd;
    }
    if(n==1)
        cout<<"1";
    else
    {
        if(odd%2==1)
            cout<< odd;
        else
            cout<< n - odd;
    }
}
    
