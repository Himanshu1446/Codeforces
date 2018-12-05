#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{ 
    string input;
    int count=0,index,flag=0;
    cin >>input;
    int x=input.length();
    for(int i=0;i<x;i++)
    {
        if(input[i]=='1')
            ++count;
    }
    if(count == x)
    {
        for(int i=0;i<x-1;i++)
            cout<<"1";
    }
    else
    {
        if(flag==0)
        {
            for(int i=0;i<x;i++)
                if(input[i]=='0'){
                    index = i;
                 break;   
                }
        }
        
        for(int i=0;i<x;i++)
        {
            if(i==index)
                continue;
            else
                cout<<input[i];
        }
        
    }
    
 
}