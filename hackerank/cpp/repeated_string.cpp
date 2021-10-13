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
    string s;
    cin >> s;
    long n;
    cin >> n;
    int len,c=0,t=0;
    len=s.length();
    for(int i=0;i<len;i++)
        {
        if(s[i]=='a')
            c++;
    }
    for(int i=0;i<n%len;i++)
        {
        if(s[i]=='a')
            t++;
    }
    cout<<(n/len)*c+t<<endl;
    return 0;
}
