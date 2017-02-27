#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
 int arr1[3],a=3,b=3;
    int arr2[3];
    for(int i=0;i<3;i++)
        cin>>arr1[i];
     for(int i=0;i<3;i++)
        cin>>arr2[i];
    for(int i=0;i<3;i++)
    {if(arr1[i]>arr2[i])
    b--;
     else if(arr1[i]<arr2[i])
         a--;
         else
         {
         a--;
         b--;
     }
    }
    cout<<a<<" "<<b;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
