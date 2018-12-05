#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{ 
    string h, m;
    getline(cin,h);
    getline(cin,m);
    int l1 = h.length() ,l2 = m.length(),flag=0;
    int a[26]={0},b[26]={0};   
        for(int i=0;i<l1;i++)
        {
            if(h[i]>='a' && h[i]<='z')
                ++a[h[i]-'a'];
            if(h[i]>='A' && h[i]<='Z')
                ++b[h[i]-'A'];
            
        }
        for(int i=0;i<l2;i++)
        {
             if(m[i]>='a' && m[i]<='z'){
                   if(a[m[i]-'a']>0)
                   {
                       --a[m[i]-'a'];
                   }
                else
                {
                    flag=1;
                    break;

                }
             }
            
                 if(m[i]>='A' && m[i]<='Z'){
                   if(b[m[i]-'A']>0)
                   {
                       --b[m[i]-'A'];
                   }
                else
                {
                    flag=1;
                    break;

                }

            }
            
        
    }
        if(flag==1)
            cout<<"NO";
        else
            cout<<"YES";
    
    
    
}