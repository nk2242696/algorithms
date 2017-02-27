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


int main()
{
    char s[100];
    cin >> s;
    int len;
    len=strlen(s);
    int i,j,index;
    i=floor(sqrt(len));
    j=ceil(sqrt(len));
    if(i*j<len)
        i++;
    for(int k=0;k<j;k++)
       { for(int l=0;l<i;l++)
        {
           index=l*j+k;
           if(index<len)
               cout<<s[index];
    }
    cout<<" ";
}
    return 0;
}
