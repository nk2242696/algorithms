#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*long long fact[15];
void f()
    {
    fact[0]=1;
    for(int i=1;i<10;i++)
        fact[i]=i*fact[i-1];
}
long long num[100007]={0};
void check()
    {
    for(long long i=10;i<100007;i++)
        {
        int temp=i;
        while(temp)
            {
            num[i]+=fact[temp%10];
            temp=temp/10;
        }
        if(num[i]%i!=0)num[i]=0;
        else
            num[i]=i;
    }
}*/

int main() {
 int arr[]={19 ,56, 71 ,93, 145 ,219 ,758 ,768 ,7584, 7684 ,9696 ,10081, 21993 ,40585,1000000 };
    int n,sum=0;
    cin>>n;
   for(int i=0;arr[i]<n;i++)
       sum+=arr[i];
    cout<<sum;
    return 0;
}
