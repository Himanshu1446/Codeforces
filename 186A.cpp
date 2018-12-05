#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{ 
   string a,b;
    cin>>a>>b;
    int l1 = a.length(),count=0;
    int l2 = b.length(),flag=1;
    int first[26]={0},second[26]={0};
    if(l1!=l2)
    {
        cout<<"NO";
    }
    else
    {
        for(int i=0;i<l1;i++)
        {
            ++first[(a[i] - 'a')];
        }
        
        for(int i=0;i<l2;i++)
        {
            ++second[(b[i] - 'a')];
        }
        
        for(int i=0;i<26;i++)
        {
            if(first[i]!=second[i])
                flag=0;
        }
        
        for(int i=0;i<l1;i++)
        {
            if((a[i] - b[i])!=0)
                ++count;
            if(count >2)
                break;
        }
        if(count<=2 && flag==1)
            cout<<"YES";
        else
            cout<<"NO";
    }
    
 
}