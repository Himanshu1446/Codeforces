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
    long long int len  = s.length() , sum =0,sum2=0,count=1;
    int flag=1;
    for(long long int i=0;i<len;i++)
    {
        sum = sum + s[i] - '0';
    }
    if(len ==1)
        cout<<"0"; 
    else if(sum <=9)
        cout<<"1";
    else{
        
           while(flag)
            {
                while(sum!=0)
                {
                    sum2 = sum%10 + sum2;
                    sum = sum/10;
                }
                ++count;
                if(sum2 >9)
                {

                    sum = sum2;
                    sum2=0;
                }
                else
                {
                    flag=0;
                }

            }
        cout<<count;
        }
    
    
}
    
