#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[]={23 ,37 ,53 ,73 ,313 ,317, 373 ,797 ,3137 ,3797 ,739397,10000001};
    int t;
    long long sum=0;
    cin>>t;
    for(int i=0;arr[i]<t;i++)
        sum+=arr[i];
    cout<<sum;
    return 0;
}
