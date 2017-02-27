#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */

int main() {
  int n;
    cin>>n;
    while(n--)
        {
        int a=0,b=0,c=0;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
            {
            if(s[i]=='a')
                a++;
            else if(s[i]=='b')
                b++;
                else
                c++;
        }
        if(a==s.length()||b==s.length()||c==s.length())
            cout<<s.length()<<endl;
        else if((a%2==0&&b%2==0&&c%2==0)||(a%2!=0&&b%2!=0&&c%2!=0))
            cout<<"2"<<endl;
            else
            cout<<"1"<<endl;

    }
    return 0;
}
