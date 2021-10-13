#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 5000001
int values[MAX];
int x[MAX];
long long collartz(long long a)
    {
       if(a==1)
        return 0;

    if(a<MAX&&values[a])
        return values[a];
    int result;
    if(a%2==0)
        result= 1+collartz(a/2);
    if(a%2!=0)
        result=1+collartz(3*a+1);
    if(a<MAX)
        values[a]=result;
    return result;

}

int main() {
    int ans;
    for(int i=1;i<MAX;i++)
        {
        ans=collartz(i);
        if(ans>=values[x[i-1]])
            x[i]=i;
        else

             x[i]=x[i-1];
    }
    int t;
    cin>>t;
    while(t--)
        {
        long long num;
        cin>>num;
        cout<<x[num]<<endl;

    }
    return 0;
}
