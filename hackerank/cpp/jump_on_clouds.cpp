#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{int n,c=0,i;
 cin>>n;
 int arr[n];
 for(i=0;i<n;i++)
     cin>>arr[i];
 i=0;
 while(i!=n-1)
     {
     if(arr[i+2]==0)
     {i=i+2;
      c++;}
     else if(arr[i+1]==0)
     {i=i+1;
         c++;
    }
     else if(arr[i]==1)
         break;

 }
 cout<<c<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
