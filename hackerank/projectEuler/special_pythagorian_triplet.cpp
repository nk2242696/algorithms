#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{int t;
 cin>>t;
 while(t--)
     {
     long long n;
     cin>>n;
     long long c,b,a,res=-1;
    for(c=1;c<=n/2;c++)
        {for(b=(n-c)/2;b<(n-c)&&b<c;b++)
           { a=n-(b+c);
            if(a>b)
                continue;
            if(a*a+b*b==c*c&&c>0)
               res=max(res,a*b*c);
            }
    }
    cout<<res<<endl;

 }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
