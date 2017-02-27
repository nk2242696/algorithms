#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{int size,x=0,y=0,z=0;
 float a,s,d;
    scanf("%d",&size);


   int arr[size];
    for(int k=0;k<size;k++)
        {
        scanf("%d",&arr[k]);
        if(arr[k]>0)
            x++;
        else if(arr[k]<0)
            y++;
            else if(arr[k]==0)
            z++;

       }
 a=(x*1.0)/size;
 s=(y*1.0)/size;
 d=(z*1.0)/size;

 printf("%f\n%f\n%f\n",a,s,d);


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
