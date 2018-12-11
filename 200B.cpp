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
    int  x;
    cin >>x;
    std::cout << std::setprecision(12) << std::fixed;
    double a[x],sum =0;
    for(int i=0;i<x;i++){
        cin >>a[i];
        sum = sum + a[i];   
    }
    cout << sum/x;    
    
}
