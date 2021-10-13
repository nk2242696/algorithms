#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
long long arr[1000001];
long long sum[1000001];
void sieve()
    {
    arr[1]=1;
    for(int i=2;i*i<1000001;i++)
        {if(arr[i]==0)
        for(int j=2*i;j<1000001;j+=i)
            arr[j]=1;
    }
    sum[0]=0;sum[1]=0;
    for(int i=2;i<1000001;i++)
        {
        if(arr[i]==0)
            sum[i]=sum[i-1]+i;
        else
        sum[i]=sum[i-1];
    }

}

int main(){
    sieve();
    int t;
    cin >> t;

    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<sum[n]<<endl;
    }
    return 0;
}
