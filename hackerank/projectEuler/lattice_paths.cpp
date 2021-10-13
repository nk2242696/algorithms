#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long A[500+1][500+1];
void fun()
    {
    for(int i=0;i<=500;i++)
       { for(int j=0;j<=500;j++)
           {if(i==0||j==0)
               A[i][j]=1;
              else
             A[i][j]=(A[i][j-1]+A[i-1][j])%1000000007;
       }
  }
}
int main() {
    fun();
    int n;
    cin>>n;
    while(n--)
        {
        int a;
        int b;
        cin>>a>>b;
        cout<<A[a][b]<<endl;
    }
    return 0;
}
