#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
    int n,i,j;
    cin>>n;
    long long arr[n][n],sum=0,res;
    for( i=0;i<n;i++)
      for(j=0;j<n;j++)
            cin>>arr[i][j];
        for( i=0;i<n;i++)
            for(j=0;j<n;j++)
                 {       if(i==0&&j==0)
                         arr[i][j]=arr[i][j];
                         if(i==0&&j!=0)
                         arr[i][j]+=arr[i][j-1];
                         if(j==0&&i!=0)
                         arr[i][j]+=arr[i-1][j];

                  }
   for( i=1;i<n;i++)
        for(j=1;j<n;j++)
        {
            arr[i][j]+=min(arr[i][j-1],arr[i-1][j]);

    }
    //cout<<arr[n-1][n-1]<<endl;

        cout<<arr[n-1][n-1]<<" ";
    return 0;
}
