#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num;
    cin>>num;
    while(num--)
        {
    long long n,m,s,ans;
        cin>>n>>m>>s;
        ans=(((m%n)-1)+s)%n;
        if(ans==0)
            cout<<n<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}
