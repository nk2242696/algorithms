#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long X[100007];
long long sum_div(long long n)
    {int i;
    long long res=1;
    for(i=2;i*i<n;i++)
       { if(n%i==0)
        res+=i+n/i;
       }
        if(i*i==n)
        res+=i;
        return res;
}
void init()
    {
     for(int i=1;i<100007;i++)
        {if(X[i]==1)
            continue;
         else if(sum_div(sum_div(i))==i&&i!=sum_div(i))
           {X[i]=1;
           X[sum_div(i)]=1;
           }

      }
}

int main() {
    init();

    int t;
    cin>>t;
    while(t--)
        {
        long long sum=0,num;
        cin>>num;
        for(int i=1;i<=num;i++)
            {
            if(X[i]==1)
                {
                //cout<<i<<" ";
                 sum+=i;
            }

        }
        cout<<sum<<endl;
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
