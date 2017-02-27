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
    long long t;
    cin >> t;
   long long i,val;
    i=3;
    val=3;
    while(val<t)
        {
        i=i*2;
        val=val+i;
    }
    cout<<val-t+1<<endl;

    return 0;
}
