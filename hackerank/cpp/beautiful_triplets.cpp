#include <cmath>
#include <cstdio>
#include<bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,d,c=0,i;
    map<int,int> m;
    cin>>n>>d;
    int arr[n];
    for(i=0;i<n;i++)
        {
        cin>>arr[i];
        m[arr[i]]=1;
    }
    for(i=0;i<n-2;i++)
        {
        if(m[arr[i]+d]==1&&m[arr[i]+2*d]==1)
            c++;
    }
    cout<<c<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
