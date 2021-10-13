#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{int no;
 scanf("%d",&no);
 while(no--)
 {int a,b,c,d,i=0;
  scanf("%d%d",&a,&b);
     c=ceil(sqrt(a));
 d=floor(sqrt(b));
 while(c<=d)
 {i++;
  c++;}
  printf("%d\n",i);
 i=0;}



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
