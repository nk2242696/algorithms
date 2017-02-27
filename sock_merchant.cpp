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
int s[101];

int main(){
    int n,num,sum=0;
    cin >> n;
    for(int i = 0;i < n;i++){
       cin >> num;
        s[num]++;
    }
     for(int i = 1;i <=100;i++){
       sum+=s[i]/2;
    }
    cout<<sum<<endl;
    return 0;
}
