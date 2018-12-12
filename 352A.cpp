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
    long long n,flag=1,count=0;
    cin >>n;
    vector<int> v;
    for(long long i=0;i<n;i++)
    {
        int x;
        cin >>x;
        if(x==0){
            flag=0;
            ++count;
        }
    }
    if(flag==1)
        cout<<"-1";
    else
    {
        int five = n - count;
        while((five*5)%9!=0)
        {
            --five;
        }
        for(int i=0;i<five;i++)
            cout<<"5";
        for(int i=0;i<count;i++){
            if(five==0){
                cout<<"0";
                break;
            }
            cout<<"0";
        }
        
    }
}
