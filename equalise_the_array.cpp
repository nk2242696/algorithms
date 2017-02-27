#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int arr[101];
int main() {
    int n,a;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr[a]++;
    }
     sort(arr,arr+101);
    cout<<n-arr[100]<<endl;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
