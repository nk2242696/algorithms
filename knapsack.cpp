#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int cal(int arr[],int x,int y)
    {
    int X[2000][2000];
    for(int i=0;i<y+1;i++)
    {for(int j=0;j<x+1;j++)
        {

        if(i==0||j==0)
            X[i][j]=0;
        else if(j%arr[i-1]==0)
            X[i][j]=j;
            else if(j<arr[i-1])
            X[i][j]=X[i-1][j];
        else
            X[i][j]=    X[i][j]=max(max(X[i-1][j],X[i][j-1]),arr[i-1]+X[i][j-arr[i-1]]);
            //cout<<X[i][j]<<" ";
    }
     //cout<<endl;
    }
    return X[y][x];
}
int main() {
    int t;
    cin>>t;
    while(t--)
        {
        int n,k,ans,j=0;
        cin>>n>>k;
          int arr[n];
        int arr2[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++)
            if(arr[i]!=arr[i+1])
            {
            arr2[j]=arr[i];
            j++;
        }
        arr2[j]=arr[n-1];

       ans=cal(arr2,k,j+1);
        cout<<ans<<endl;
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

