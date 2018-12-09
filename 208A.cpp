#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{
    int len;
    string s;
    cin>>s;
    len = s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B' && i <len-2){
            i=i+2;
            cout<<" ";
        }
        else
            cout<<s[i];
    }
    
    
}
