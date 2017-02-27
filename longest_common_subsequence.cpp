#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m;
     int i,j;
    cin>>n>>m;
    int x[n];
    int y[m];
    for(i=0;i<n;i++)
        cin>>x[i];
    for( i=0;i<m;i++)
        cin>>y[i];





    int arr[100][100];
    for(i=0;i<=n;i++)
        {
        for(j=0;j<=m;j++)
            {
            if(i==0||j==0)
                arr[i][j]=0;
            else if(x[i-1]==y[j-1])
                {
                arr[i][j]=arr[i-1][j-1]+1;
            }
            else
                arr[i][j]=max(arr[i-1][j],arr[i][j-1]);

        }
    }
     int index=arr[n][m];
    int l[index];
    i=n, j=m;
   while (i>0&&j>0)
   {
      if (x[i-1] == y[j-1])
      {
          l[index-1] = x[i-1];
          i--; j--; index--;
      }

      else if (arr[i-1][j] > arr[i][j-1])
         i--;
      else
         j--;
   }

 for(i=0;i<arr[n][m];i++)
     cout<<l[i]<<" ";
    cout<<endl;
    return 0;
}
