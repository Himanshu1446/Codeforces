#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{ 
  int n,y,ab=0,flag=0;
    char x;
    cin >>n;
    vector<int> a;
    vector<int> b;
    for(int i=0;i<n;i++)
    {
        cin>>x;
          y = x - '0';
        a.push_back(y);
    }
    sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
    {
        cin>>x;
        y = x - '0';
        
        b.push_back(y);
    }
    sort(b.begin(),b.end());
    
    if(a[n-1] > b[n-1])
        ab=1;
    
    for(int i=n-1;i>=0;i--)
    {
        if(ab==1)
        {
            if(a[i] <= b[i])
            {
                flag=1;
                break;
            }
                
            
        }
        else if(ab==0)
        {
            if(a[i] >= b[i])
            {
                flag=1;
                break;
            }
              
        }
        else
        {
            flag=1;
            break;
            
            
        }
    }
    if(flag==1)
        cout<<"NO";
    else
        cout<<"YES";
        
    return 0;
 
}