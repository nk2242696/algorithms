#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int arr[26];
    for(int i=0;i<26;i++)
        cin>>arr[i];
    string s;
    cin>>s;
    int max1=0;
    int l=s.length();
    for(int i=0;i<l;i++)
        {
        if(arr[s[i]-'a']>max1)
            max1=arr[s[i]-'a'];
    }
    cout<<max1*l<<endl;
    return 0;
}
