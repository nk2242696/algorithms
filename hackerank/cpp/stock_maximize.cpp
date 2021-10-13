#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    while(n--)
        {
        int num;
        long long profit=0,max1=0;
        cin>>num;
        int arr[num];
        for(int i=0;i<num;i++)
            cin>>arr[i];
        for(int i=num-1;i>=0;i--)
            {
            if(arr[i]>max1)
            {
                max1=arr[i];


            }
      profit+=max1-arr[i];
        }
        cout<<profit<<endl;

    }
    return 0;
}
