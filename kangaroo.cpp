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
    int x1;
    int v1;
    int x2,t=0;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if(x1>x2)
        {
        while(x1>x2)
            {
            t++;
        x1+=v1;
            x2+=v2;
        }
        if(x1==x2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    else if(x1<x2)
        {
        while(x1<x2)
            {
            t++;
        x1+=v1;
            x2+=v2;
        }
        if(x1==x2)
           cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
