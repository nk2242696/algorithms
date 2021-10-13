#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    while(n--)
        {
        int t,max1=0;
        cin>>t;
        int arr[t][t];
       // int X[t][t];
        for(int i=0;i<t;i++)
            for(int j=0;j<=i;j++)
            cin>>arr[i][j];
            for(int i=1;i<t;i++)
                    {for(int j=0;j<=i;j++)
                        {
                        int path_left;
                        if(j==0)
                            path_left=0;
                        else path_left=arr[i-1][j-1];
                         int path_right;
                        if(j==i)
                            path_right=0;
                        else path_right=arr[i-1][j];
                        arr[i][j]=arr[i][j]+max(path_left,path_right);
                    }
                 }
                     for(int k=0;k<t;k++)
                   {
                         max1=max(max1,arr[t-1][k]);
                     }
        cout<<max1<<endl;
    }


    return 0;
}
