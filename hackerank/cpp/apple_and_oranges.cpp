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
   int s,t,c1=0;
    int c2=0;
    cin>>s>>t;
    int a,b;
    cin>>a>>b;
    int n1,n2;
    cin>>n1>>n2;
    int arr[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>arr[i];
        if(a+arr[i]>=s&&a+arr[i]<=t)
            c1++;
    }
    int arr2[n2];
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
        if(b+arr2[i]>=s&&b+arr2[i]<=t)
            c2++;
    }
    cout<<c1<<endl;
    cout<<c2<<endl;

    return 0;
}
