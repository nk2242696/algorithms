#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{int t;
 cin>>t;
 while(t--)
     {
     int n;
     cin>>n;
     int arr[n],d[n],max1=-10000,sum=0;
         for(int i=0;i<n;i++)
         {cin>>arr[i];
         d[i]=arr[i];
         if(d[i]>0)
         sum+=d[i];
         }
    for(int i=1;i<n;i++)
    d[i]=max(arr[i],d[i-1]+arr[i]);

     for(int i=0;i<n;i++)
         {
         if(d[i]>max1)
             max1=d[i];
     }
     sort(arr,arr+n);
     if(arr[n-1]<0)
     cout<<max1<<" "<<arr[n-1]<<endl;
     else
          cout<<max1<<" "<<sum<<endl;
 }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    return 0;
}

