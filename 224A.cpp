#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{
    int a1,a2,a3;
    cin >>a1 >>a2 >>a3;
    int a,b,c;
    a = sqrt((a1*a2)/a3);
    b = sqrt((a1*a3)/a2);
    c = sqrt((a3*a2)/a1);
    cout<< 4*(a+b+c);
    
}
