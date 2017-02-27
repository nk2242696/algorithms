#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,ans;
    int k,max1=0;
    cin>>n>>k;
    int arr[k];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    sort(arr,arr+k);

    for(int i=1;i<k;i++)
        {
        if(arr[i]-arr[i-1]>max1)
            max1=arr[i]-arr[i-1];
    }
     ans=max(max1/2,max(arr[0],(n-1)-arr[k-1]));
    cout<<ans<<endl;

    return 0;
}
