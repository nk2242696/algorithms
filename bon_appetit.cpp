#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,b,sum=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {cin>>arr[i];
    sum+=arr[i];
    }
    sum-=arr[k];
    sum=sum/2;
    cin>>b;
    if(b==sum)
        cout<<"Bon Appetit"<<endl;
    else
        cout<<b-sum<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
