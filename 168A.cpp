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
    double n,x,y;
    cin >>n>>x>>y;
    double t = (y*n)/100.0;
    if(x >=t)
        cout<<"0";
    else
        cout<< ceil(t-x);
    
}
    
