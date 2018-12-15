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
    long long len = s.length(),i=0,flag=0;
    while(i<len)
    {
        if(i+2 <len &&  s[i] == '1' && s[i+1] =='4'&& s[i+2] =='4' )
        {
            i=i+3;
        }
        else if( i+1< len &&  s[i] == '1' && s[i+1] =='4')
            i = i +2;
        
        else if(i < len && s[i]=='1')
            ++i;
        else
        {
            flag=1;
            break;
            
        }
    }
    
    if(flag==1)
        cout<<"NO";
    else
        cout<<"YES";
}
