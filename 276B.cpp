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
    int len,odd =0 ,even =0;
    string s;
    cin >>s;
    int a[26] = {0};
    len = s.length();
    
    for(int i=0;i<len;i++)
    {
        ++a[s[i] - 'a'];
    }
    
    for(int i=0;i<26;i++)
    {
        if(a[i]%2 ==0)
            ++even;
        else
            ++odd;
    }
    if(odd%2==1 || odd ==0)
        cout<<"First";
    else
        cout<<"Second";
    
  
}
