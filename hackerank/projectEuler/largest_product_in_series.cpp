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
        int n,res,pro;
        int k;
        cin >> n >> k;
        string num;
        cin >> num;
        for(int i=0;i<n-k+1;i++)
            {pro=1;
            for(int j=i;j<i+k;j++)
                {
                pro=pro*(num[j]-'0');
            }
             res=max(res,pro);
        }
        cout<<res<<endl;
        res=0;
    }
    return 0;
}
