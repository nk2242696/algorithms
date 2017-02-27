#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long i,j,k,c=0;
    cin>>i>>j>>k;
    while(i<=j)
        {
        long long a,rev;
        long long temp=0;
        a=i;
        while(a)
            {
            rev=temp*10+a%10;
            temp=rev;
            a=a/10;
        }
        if(abs(i-rev)%k==0)
            c++;
        i++;
    }
    cout<<c<<endl;
    return 0;
}
