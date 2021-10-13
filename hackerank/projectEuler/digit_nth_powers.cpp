#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,num;
    cin>>N;
    long sum=0;
    for(num=100;num<=600000;num++)
        {
        i=num;
        long sum1=0;
        while(i!=0)
            {
                    int rem;
                    rem=i%10;
                    sum1+=pow(rem,N);;
                    i=i/10;
            }
        if(sum1==num)
        sum+=num;
}
cout<<sum<<endl;
return 0;
}
