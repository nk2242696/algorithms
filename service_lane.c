#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{int n,t,v,s,min;
 scanf("%d\b",&n);
 scanf("%d\n",&t);
 int arr[n];
 for(int i=0;i<n;i++)
     {
     scanf("%d",&arr[i]);
 }
 while(t--)
     {int min=3;
     scanf("%d %d\n",&v,&s);
     for(int p=v;p<=s;p++)
         {
         if(arr[p]<=min)
         {min=arr[p];
          }

     }
     printf("%d\n",min);

 }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
