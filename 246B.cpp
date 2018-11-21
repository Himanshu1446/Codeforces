#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{ 
    int n;
    cin >>n;
    int a,sum=0;;
    for(int i=0;i<n;i++)
    {
        cin >>a;
        sum = sum +a;
        
    }
    if(sum%n==0)
        cout<<n;
    else
        cout<<n-1;
 
}