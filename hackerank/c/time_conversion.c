#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{int h,m,s;
char time[4];
scanf("%d:%d:%d%s",&h,&m,&s,time);
if(time[0]=='P')
    {
    if(h==12)
    h=12;
    else
        h=h+12;}

else if(time[0]=='A')
{
if(h==12)
    h=0;
else
h=h;}
printf("%0.2d:%0.2d:%0.2d",h,m,s);
 return 0;}
