#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int hcf(int a,int b)
{

    if((a>=b)&&(a%b==0))
        return b;
    else

    return (hcf(b,(a%b)));
}

int main()
{int num;
 scanf("%d",&num);
 while(num--)
     {
     int a;
     scanf("%d",&a);
     long ans,lcm;
     int i=3;
     if(a==1)
         printf("1\n");
     else if(a==2)
         printf("2\n");
         else{
     ans=hcf(1,2);
         lcm=1*2/ans;
     while(i<=a)
         {
         ans=hcf(lcm,i);
             lcm=(i*lcm)/ans;
         i++;
     }
         printf("%ld\n",lcm);}


 }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
