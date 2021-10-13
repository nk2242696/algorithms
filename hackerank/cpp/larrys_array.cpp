#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int count(int arr[],int n)
    {int c=0;
    for(int i=0;i<n-1;i++)
        {
        for(int j=i+1;j<n;j++)
            {
            if(arr[i]>arr[j])
            {c++;
            //cout<<arr[i]<<arr[j]<<" ";
            }
        }
    }
     return c;
}

int main() {
    int n;
    cin>>n;
    while(n--)
        {
        int num,ans;
        cin>>num;
        int arr[num];
        for(int i=0;i<num;i++)
            cin>>arr[i];
        ans=count(arr,num);
        if(ans%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
