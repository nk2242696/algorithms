#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long int a,max1,min1,sum;
        max1=0,sum=0;
        min1=1000000009;
    for(int i=0;i<5;i++)
        {
        cin>>a;
        if(a>max1)
            max1=a;
       if(a<min1)
            min1=a;
        sum+=a;

    }
    cout<<sum-max1<<" "<<sum-min1<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
