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
    int n,flag2=0;
    cin >>n;
    if(n<=3)
        cout<<"NO";
    else
    {
        for(int i=4;i<=n;i++)
        {
            int x = i,flag=0;
            while(x!=0)
            {
                if(x%10!=4 && x%10!=7)
                {
                    flag=1;
                    break;
                }
                x=x/10;
                
            }
            if(flag==0 && n%i==0){
                flag2=1;
                break;
            }
        }
        if(flag2==1)
            cout<<"YES";
        else
            cout<<"NO";
    }
    
}
    
