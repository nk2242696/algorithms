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
    int N,lovesgiven=0;
    cin >> N;
    vector<int> B(N);
    for(int B_i = 0;B_i < N;B_i++){
       cin >> B[B_i];
    }
     for(int B_i = 0;B_i < N-1;B_i++)
     {
     if(B[B_i]%2!=0)
            {
            B[B_i]++;
                        B[B_i+1]++;

            lovesgiven+=2;
        }
     }
    if(B[N-1]%2==0)
        cout<<lovesgiven<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
