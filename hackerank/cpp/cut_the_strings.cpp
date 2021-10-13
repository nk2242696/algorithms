#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{int size,i,j,min,temp,k,n=5;
 scanf("%d",&size);
 int arr[size];
 for(i=0;i<size;i++)
     scanf("%d",&arr[i]);
 for(i=1;i<size;i++)
     for( j=0;j<i;j++)
     if(arr[j]>arr[i])
     {
     temp=arr[j];
     arr[j]=arr[i];
     arr[i]=temp;
    }
 	while(n!=0)
		{int count=0;
		for(j=0;j<size;j++)
		{
			if(arr[j]!=0)
			count++;
		}
		n=count;
		if(count!=0)
		printf("%d\n",count);
		min=arr[size-count];

		for(j=size-count;j<size;j++)
		{
			arr[j]=arr[j]-min;
		}

	}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
