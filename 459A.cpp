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
    int x1,y1,x2,y2;
    cin >>x1>>y1>>x2>>y2;
    int y = abs(y2 -y1);
    int x = abs(x2 - x1);
    
    if(x==0 || y==0 ||x==y)
    {
        
        if(x==0)
        {
            int a = abs(y2 - y1);
            
                cout<< x1 + a <<" "<<y1 <<" "<<x2 + a<<" "<<y2;
            
        }
        else if( y==0)
        {
             int a = abs(x2 - x1);
                cout<< x1  <<" "<<y1 + a <<" "<<x2 <<" "<<y2 + a; 
            
        }
        else
        {
            
                cout<< x1  <<" "<<y2 <<" "<<x2<<" "<<y1; 
        }
    }
    else
        cout<<"-1";
    
}
    
