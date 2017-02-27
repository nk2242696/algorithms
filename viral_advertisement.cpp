#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
        int n;
        int a=2,sum=2;
    int temp,b;
    cin>>n;
    if(n==1)
        cout<<2;
    b=n-1;
    while(b--)
        {
        temp=a*3;
        sum+=floor(temp/2);
        a=floor(temp/2);
    }
    cout<<sum<<endl;
    return 0;
}
