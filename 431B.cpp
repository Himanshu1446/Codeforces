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
  int a[5][5],count=0 , max=0,profit =0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            cin >>a[i][j];
    }
    string s ="12345";
    do{
        profit = a[s[0] - '1'][s[1] - '1'] + a[s[1] - '1'][s[0] - '1'] + a[s[1] - '1'][s[2] - '1'] + a[s[2] - '1'][s[1] - '1'] + 2*(a[s[2] - '1'][s[3] - '1'] + a[s[3] - '1'][s[2] - '1'] + a[s[3] - '1'][s[4] - '1'] + a[s[4] - '1'][s[3] - '1']);
            if(max<profit){
                max = profit;
            }
    }
    while(next_permutation(s.begin(),s.end()));
    
    cout<<max;
}
