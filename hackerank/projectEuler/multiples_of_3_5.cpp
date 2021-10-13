#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{long cases,sum;
 scanf("%ld",&cases);
 while(cases--)
 {
    long num,a,b,c;
     scanf("%ld",&num);
     a=(num-1)/3;
     b=(num-1)/5;
     c=(num-1)/15;
     sum=a*(6+(a-1)*3)/2+b*(10+(b-1)*5)/2-c*(30+(c-1)*15)/2;
     printf("%ld\n",sum);
 }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
