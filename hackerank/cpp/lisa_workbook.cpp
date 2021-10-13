#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
    {
int n,k,w;
cin>>n>>k;
int p=0;
int special=0;
for(int i=0 ;i<n;i++) {
    cin>>w;
        for(int j=0;j<w;j++) {
            if(j%k==0) {
            p+=1;
            }
            if((j+1)==p) {
                special+=1;
            }
        }
}
cout<<special;
return 0;
}
