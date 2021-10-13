#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long ans(int arr[],int sum,int n)
    {

    long long V[n+1][sum+1];


        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(j==0)
                    V[i][j]=1;
                else if(i==0)
                    V[i][j]=0;
                else if(j<arr[i-1])
                {
                    V[i][j]=V[i-1][j];
                }
                else if(j>=arr[i-1])
                {
                    V[i][j]=V[i-1][j]+V[i][j-arr[i-1]];
                }
            }
        }
    return V[n][sum];

}
int main()
{
        long long sum,n;
        cin>>sum>>n;
    int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    long long a=ans(arr,sum,n);
    cout<<a<<endl;

}
