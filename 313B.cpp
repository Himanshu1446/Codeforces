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
    string s;
    cin >>s;
    long n;
    cin >>n;
    long len = s.length();
    long a[len]={0};
    
    for(int i=1;i<len;i++)
    {
        if(s[i]==s[i-1])
            ++a[i];
        a[i] = a[i] + a[i-1];
    }
    for(int i=0;i<n;i++)
    {
        int fir,sec;
        cin >>fir>>sec;
        cout<<a[sec-1] - a[fir-1]<<endl;
    }
    return 0;
    
}
    

