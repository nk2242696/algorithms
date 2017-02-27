#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,q,j=0,a;
    cin>>n>>k>>q;
    k=k%n;
    int arr1[n];
    int arr2[n];
    int arr3[q];
    for(int i=0;i<n;i++)
       cin>>arr1[i];
    for(int k=0;k<q;k++)
        cin>>arr3[k];

    for(int i=n-k;i<n;i++)
        arr2[j++]=arr1[i];
    for(int i=0;i<=n-k-1;i++)
        arr2[j++]=arr1[i];

    for(int i=0;i<q;i++)
       cout<<arr2[arr3[i]]<<endl;

    return 0;
}
