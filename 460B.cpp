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
    int a,b,c;
    cin >>a>>b>>c;
    vector<int> v;
    
    for(int i=1;i<=81;i++)
    {
        double x = b*(pow(i , a)) + c;
        long p = x;
        long sum =0,temp=p;
        if(x ==p)
        {
            while(temp!=0)
            {
                sum = sum + temp%10;
                temp =temp/10;
            }
            if(sum==i && p >0 && p <1000000000)
                v.push_back(p);
            
        }
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    
}
    
