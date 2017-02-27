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
    int t;

    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        int arr[n+1];
        if(k==0)
        {for(int i=1;i<n+1;i++)
            cout<<i<<" ";
            cout<<endl;
        }
        else if(n%(2*k)!=0)
            cout<<"-1"<<endl;

        else{
       for(int i=1;i<=n/(2*k);i++)
           {
           for(int j=1;j<=2*k;j++)
               {
               if(j<=k)
               cout<<2*i*k-(k-j)<<" ";
               else
                   cout<<2*(i-1)*k+(j-k)<<" ";
           }

          }
            cout<<endl;
        }
    }
    return 0;
}
