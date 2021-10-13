#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;
bool prime[110001];
int arr[10007];
void p()
    {
    memset(prime,true,sizeof(prime));
}
void seive()
    {
    long long i,j,k=0;
    for(i=2;i*i<=110000;i++)
        {
        if(prime[i]==true)
            for(j=i*2;j<=110000;j+=i)
            prime[j]=false;
    }
    for(i=2;i<=110000;i++)
        if(prime[i]==true)
       arr[++k]=i;
}
int main()
{
p();
    seive();

    int t;
    cin>>t;
    while(t--)
        {
        int n;
        cin>>n;
        cout<<arr[n]<<endl;
    }
    return 0;
}
