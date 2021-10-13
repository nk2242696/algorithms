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
int main(){
    int n,ans;
    int k,c=0;
    cin >> n >> k;
    int arr[n];
    for(int a = 0;a < n;a++){
       cin >> arr[a];
    }
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        {
        ans=arr[i]+arr[j];
        if(ans%k==0)
           c++;
    }

    cout<<c;
    return 0;
}
