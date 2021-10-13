#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

  int arr[20][20];
int main()
{

    int dr[]={-1,-1,0,1};
    int dc[]={0,1,1,1};
    int res=0;
    for(int i=0;i<20;i++)
        for(int j=0;j<20;j++)
        cin>>arr[i][j];

          for(int i=0;i<20;i++)
                for(int j=0;j<20;j++)
                    for(int d=0;d<4;d++)
                            {
                            int p=1;
                            for(int n=0;n<4;n++)
                                {
                                int r=i+dr[d]*n;
                                int c=j+dc[d]*n;
                                if(r>=0 && r<=20 && c>=0 && c<=20)
                                    p*=arr[r][c];
                                else
                                    p=0;
                             }
                            res=max(res,p);
                          }
    cout<<res<<endl;
    return 0;
}
