#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{int chan;
 scanf("%d",&chan);
 while(chan--)
 {
  int num,rem,temp,count=0;
  scanf("%d",&num);
  temp=num;
  while(num!=0)
  {
      rem=num%10;
      num=num/10;

  if(rem!=0&&temp%rem==0)
      count++;

  }


  printf("%d\n",count);
 }
return 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

}
