#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MOD 1000000007;
int main() {
    string s;
    long long a=1,sum=0;
    cin>>s;
    int l=s.length();
    for(int i = l-1; i >= 0; i--) {
    sum= (sum+(s[i]-'0')*a*(i+1)) % MOD;
        a = (a*10+1) % MOD;}
    cout<<sum<<endl;
    return 0;
}
