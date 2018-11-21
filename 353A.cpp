#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{  
   int n,upper =0 ,lower =0,flag=1;
    cin >>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >>a[i]>>b[i];
    upper = upper + a[i];
    lower = lower + b[i];
    }
    upper = upper%2;
    lower = lower%2;
    if((upper==1 && lower ==0)||(upper==0 && lower ==1))
        cout <<"-1";
    else if(upper==0 && lower ==0)
    {
        cout<<"0";
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if((a[i]%2==0 && b[i]%2==1)||(a[i]%2==1 && b[i]%2==0))
            {   flag=0;
                cout<<"1";
             break;
            }
        }
        if(flag==1)
            cout<<"-1";
    }
    
}