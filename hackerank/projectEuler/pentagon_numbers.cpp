#include <cmath>
#include<vector>
#include<map>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
map<long long,int> M;
long long arr[1000001];
void pol()
    {
    long long i;
    for( i=1;i<1000001;i++)
    {arr[i]=i*(3*i-1)/2;
    M[arr[i]]=i;}
}
int main() {
    pol();
    long long n,k,i;
    vector<long long> v;
    cin>>n>>k;
    for(i=k+1;i<=n;i++)
        {
        if(M[arr[i]-arr[i-k]]>0||M[arr[i]+arr[i-k]]>0)
           v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());
for (std::vector<long long>::iterator it = v.begin() ; it != v.end(); ++it)
        cout<<*it<<endl;
    return 0;
}
