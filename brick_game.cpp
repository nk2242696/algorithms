#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    while(n--)
        {
        long long a,sum=0,i;
        cin>>a;
        long long arr[a];
        long long dp[a];
        long m[a];
        for( i=a-1;i>=0;i--)
        {cin>>arr[i];
        }
        for(i=0;i<a;i++)
            {
               m[i]=arr[i]+sum;
         sum=m[i];
        }


        dp[0]=arr[0];
        dp[1]=dp[0]+arr[1];
        dp[2]=dp[1]+arr[2];
        for(i=3; i<a; i++)
        {
            dp[i]=max(-1ll,m[i-1]-dp[i-1]+arr[i]);
            dp[i]=max(dp[i],m[i-2]-dp[i-2]+arr[i]+arr[i-1]);
            dp[i]=max(dp[i],m[i-3]-dp[i-3]+arr[i]+arr[i-1]+arr[i-2]);
        }
        cout << dp[a-1] << endl;


    }
    return 0;
}
