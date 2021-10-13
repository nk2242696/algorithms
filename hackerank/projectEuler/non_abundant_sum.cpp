#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;
long long arr[100001];
//map<long long,int> m;
int sum_div(long long n)
    {int i;
    long long res=1;
    for( i=2;i*i<n;i++)
        {if(n%i==0)
            res+=i+n/i;
           }
        if(i*i==n)
        res+=i;
    if(res>n)
    return 1;
    else return 0;
}
void fun()
    {int k;
    for(int i=1;i<100001;i++)
        {
        k=sum_div(i);
        if(k==1)
        {arr[i]=1;
        //cout<<i<<" ";
         //m[i]=1;
        }
        else
            arr[i]=0;
    }
}

int main() {
    fun();
    int t;
    cin>>t;
    while(t--)
        {
        //std::map<long long,int>::iterator it;
        int i;
        long long num;
        cin>>num;
        for(i=0;i<num;i++)
        {if(arr[i]==1&&arr[num-i]==1)
           {cout<<"YES"<<endl;
            break;
           }
        }
        if(i==num)
            cout<<"NO"<<endl;

        /*for ( it=m.begin(); it!=m.end(); ++it)
            {
            if(it->first==(num-it->first)
               { cout<<"YES"<<endl;
               break;
               }
        }
        if(it!=m.end())
           // cout<<"NO"<<endl;*/
    }
    return 0;
}
