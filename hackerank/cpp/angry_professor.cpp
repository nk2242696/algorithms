#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{int lop;
 scanf("%d",&lop);
 while(lop--)
 {
     int n,k,i=0,count=0;
     scanf("%d %d",&n,&k);
     int arr[n];
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }

     for(i=0;i<n;i++)
     {if(arr[i]<=0)
         count++;
     }
     if(count>=k)
         printf("NO\n");
     else
         printf("YES\n");



 }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
