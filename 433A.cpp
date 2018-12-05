#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{ 
    int n,x,total,com,flag=0;
    cin >>n;
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        cin >>x;
        if(x==100)
            ++a;
        else
            ++b;
    }
    total = a*100 + b*200;
    total = total/2;
    for(int i=0;i<=b;i++)
    {
        if((total - 200*i)%100 ==0)
        {
            com = (total - 200*i)/100;
            if(com <= a && com >=0)
                flag=1;
            
            
        }
    }
    if(flag==0 ||n==1 )
        cout<<"NO";
    else
        cout<<"YES";
 
}