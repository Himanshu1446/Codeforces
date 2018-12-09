#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{
    int k,len,flag=0,num;
    cin >>k;
    string str;
    cin >>str;
    len = str.length();
    int a[26] = {0};
    for(int i=0;i<len;i++)
    {
        ++a[str[i]-'a'];
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]%k!=0)
            flag=1;
    }
    if(flag==1)
        cout<<"-1";
    else
    {
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<26;j++)
            {
                if(a[j]==0)
                    continue;
                
                num = a[j]/k;
                while(num--)
                    cout<< char(j+'a');
                
            }
        }
    }
    
}
