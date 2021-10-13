#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool ispal(int n )
    {
    vector<int> v;
    while(n)
        {
        v.push_back(n%10);
        n=n/10;
    }
    for(int i=0;i<v.size();i++)
       if(v[i]!=v[v.size()-1-i])
        return false;
    return true;
}
int main()
{
    vector<int> pal;
    for(int i=100;i<=999;i++)
            for(int j=0;j<=i;j++)
            {
            int m=i*j;
            if(ispal(m))
                pal.push_back(m);
        }
    sort(pal.begin(),pal.end());


    int n;
    cin>>n;
    while(n--)
        {
        int num,i=0,a=0;
        int lar=0;
        cin>>num;
          for(int i=0;i<pal.size();i++)
             { if(pal[i]<num)
             {lar=pal[i];
              lar=max(lar,pal[i]);
             }
             }
        cout<<lar<<endl;
    }
    return 0;
}
