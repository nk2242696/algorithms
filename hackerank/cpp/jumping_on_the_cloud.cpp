#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int i = 0;i < n;i++){
       cin >> c[i];
    }
    int energy=100;
    for(int i=0;i<n;i+=k){
        if(c[i]==0) energy--;
        else energy-=3;
    }
    printf("%d",energy);
    return 0;
}
