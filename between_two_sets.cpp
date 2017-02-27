#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;

        a = b;
        b = temp;
    }
    return a;
}
int lcm(int a, int b)
{
    int temp;
    int k=a*b;
    while (b != 0)
    {
        temp = a % b;

        a = b;
        b = temp;
    }
    return k/a;
}
int main() {
    int n,m;
    cin>>n>>m;
    int arr[n],pr=1,a,b,c=0;
    int arr1[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        pr=pr*arr[i];

    }
    a=arr[0];
    for(int i=1;i<n;i++)
      a=lcm(a,arr[i]);

    for(int i=0;i<m;i++)
        cin>>arr1[i];
    b=arr1[0];

    for(int i=1;i<m;i++)
        b=gcd(b,arr1[i]);


   for(int i = 1; i*a<=b; i++){
            if(b%(i*a)==0){ c++;}
        }
    cout<<c<<endl;

    return 0;
}
