#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
        {
        int n,a,b,i;
        cin>>n>>a>>b;
        int arr[n];
        for( i=0;i<n;i++)
            {
            arr[i]=(n-1-i)*a+i*b;
            //cout<<arr[i]<<"  ";
        }
       sort(arr,arr+n);
         for( i=0;i<n-1;i++)
            {
             if(arr[i]<arr[i+1])
            cout<<arr[i]<<" ";
        }
        cout<<arr[i];
        cout<<endl;

    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
