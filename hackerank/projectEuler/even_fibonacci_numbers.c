#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d",&num);
    while(num--)
        {
        long n,i,sum=0,a=0,b=1,count=0;
        scanf("%ld",&n);
        while(b<=n)
            {
            long temp;
            temp=a;
            a=b;b=temp+a;
            if(b%2==0&&b<=n)
                count+=b;
        }
        printf("%ld\n",count);

        }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
