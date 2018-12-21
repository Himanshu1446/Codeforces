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
    long long a,b,c,flag=1;
    cin >>a>>b;
    c=a+b;
    vector<int> fir,sec,res,fin;
    
    while(a!=0)
    {
        if(a%10!=0)
        fir.push_back(a%10);
        a=a/10;
    }
    
     while(b!=0)
    {
        if(b%10!=0)
        sec.push_back(b%10);
        b=b/10;
    }
    
     while(c!=0)
    {
        if(c%10!=0)
        res.push_back(c%10);
        c=c/10;
    }
    reverse(fir.begin(),fir.end());
    reverse(sec.begin(),sec.end());
    for(int i=0;i<fir.size();i++)
    {
        a = a*10 + fir[i];
    }
    for(int i=0;i<sec.size();i++)
    {
        b = b*10 + sec[i];
    }

    c=a+b;
    
    while(c!=0)
    {
       
        fin.push_back(c%10);
        c=c/10;
    }
    if(fin.size()!=res.size())
        cout<<"NO";
    else
    {
        for(int i=0;i<fin.size();i++)
        {
            if(fin[i]!=res[i])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            cout<<"YES";
        else
            cout<<"NO";
    }
    
    
}
    
