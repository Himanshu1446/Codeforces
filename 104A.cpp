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
    if(n-10 ==11)
        cout<<"4";
    else if(n-10 ==10)
        cout<<"15";
    else if(n- 10 <= 0 || n -10 > 11)
        cout<<"0";
    else
        cout<<"4";
}
    
