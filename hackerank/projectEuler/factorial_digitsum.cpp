#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define MAX 2600
using namespace std;
int fact(int n)
    {
    int arr[MAX],i;
    long long sum=0;
    arr[0]=1;
    int m=1,temp=0,x;
    for(int i=1;i<=n;i++)
        {
        for(int j=0;j<m;j++)
            {
            x=arr[j]*i+temp;
            arr[j]=x%10;
            temp=x/10;
        }
        while(temp>0)
            {
            arr[m]=temp%10;
            temp=temp/10;
            m++;
        }
    }
      for(i=m-1;i>=0;i--)
          {
      sum+=arr[i];
      }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
        long long  num,ans;
        cin>>num;
        ans=fact(num);
   cout<<ans<<endl;
    }
    return 0;
}
