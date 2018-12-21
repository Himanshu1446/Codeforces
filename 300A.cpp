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
    int x,count=0,negative =0,num;
    cin >>x;
    vector<int> n,p,z;
    
    for(int i=0;i<x;i++)
    {
        cin >>num;
        if(num < 0 )
            n.push_back(num);
        else if(num==0)
            z.push_back(num);
        else
            p.push_back(num);
            
        }
    
        if(p.size()==0)
        {
            p.push_back(n[0]);
            p.push_back(n[1]);
            n.erase(n.begin());
            n.erase(n.begin());
        }
            
        if(n.size()%2==0)
        {
            z.push_back(n[0]);
            n.erase(n.begin());
        }
    
          cout<<n.size()<<" ";
        for(int i=0;i< n.size();i++)
            cout<<n[i]<<" ";

        cout<<endl<<p.size()<<" ";
        for(int i=0;i< p.size();i++)
            cout<<p[i]<<" ";
    
        cout<<endl<<z.size()<<" ";
         for(int i=0;i< z.size();i++)
            cout<<z[i]<<" ";
        
        
    
}
    
