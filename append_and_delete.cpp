#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s1,s2;
    cin>>s1>>s2;
    int n,j=0,c=0,l1,l2;
    cin>>n;
    l1=s1.length();
    l2=s2.length();
    if(l1+l2<=n)
    {cout<<"Yes"<<endl;

    return 0;}
    while(s1[j]==s2[j])
        {
        c++;
        j++;
    }
    if((l1-j+l2-j)>n)
    {cout<<"No"<<endl;

    }
   else if(l1-j+l2-j==n||(n-(l1-j+l2-j))%2==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
