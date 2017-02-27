#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{int size;
 scanf("%d",&size);
 for(int i=1;i<=size;i++)
 {for(int j=size;j>i;j--)
       { printf(" ");}
  for(int k=0;k<i;k++)
  {printf("#");}

  printf("\n");}



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
