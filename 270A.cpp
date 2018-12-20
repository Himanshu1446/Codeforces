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
    cin >>n;
    
    while(n--)
    {
        float x;
        cin >>x;
        float r = 360.0/(180.0 - x);
        if(ceil(r)==r)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
    
}
    
