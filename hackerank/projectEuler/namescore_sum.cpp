#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
    int n,i;
    cin>>n;
    string s;
    vector<string> v;
    map<string,int> m;
    for(i=0;i<n;i++)
    {cin>>s;
    v.push_back(s);
    }
    sort(v.begin(),v.end());
        for(i=0;i<n;i++)
        m[v[i]]=i+1;
        int q;
    cin>>q;
    while(q--)
        {
        int sum=0;
        cin>>s;
        for(int i=0;i<s.length();i++)
            {
            sum+=s[i]-'A'+1;
        }
        cout<<m[s]*sum<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
