#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int no;
          long int arr[1000000],sum=0;
            scanf("%d",&no);
            for(int i=0;i<no;i++)
                {
                scanf("%ld",&arr[i]);
            sum=sum+arr[i];
            }
            printf("%ld",sum);


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
