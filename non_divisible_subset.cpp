#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,count=0,d;
    cin>>n>>k;
    int arr2[k]={0};
    for(int i=0;i<n;i++)
        {int x;
        cin>>x;
        arr2[x%k]++;

    }

    for(int i=1;i<=k/2;i++)
    {
        if(i==k-i&&arr2[i]>0)
            count++;
        else
        {   d=max(arr2[i],arr2[k-i]);
            count+=d;
        }


    }
    if(arr2[0]>0)
        count++;
    cout<<count<<"\n";




    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
