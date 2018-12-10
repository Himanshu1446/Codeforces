#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{
    long long  n,k;
    cin>>n>>k;
    long long  d = ceil(n/2.0);
    if(k <=d)
        cout <<2*(k-1) +1;
    else
        cout<< 2*(k-d);
  
}

