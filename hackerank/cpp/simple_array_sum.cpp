#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{int size,sum=0;
 scanf("%d",&size);
 int arr[size];
 for(int k=0;k<size;k++)
     {
     scanf("%d",&arr[k]);
     sum+=arr[k];
 }
 printf("%d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
