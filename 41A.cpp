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
    cin >>a>>b;
    reverse(b.begin() , b.end());
    int x = a.compare(b);
        if(x!=0)
            cout<<"NO";
        else
            cout<<"YES";
    
}
