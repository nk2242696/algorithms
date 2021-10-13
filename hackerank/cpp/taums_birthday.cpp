#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int min(int num1,int num2)
    {
    if(num1<=num2)
        return num1;
    return num2;
}
int max(int num1,int num2)
    {
    if(num1>=num2)
        return num1;
    return num2;
}

int main(){
    int t;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long b,w;
        scanf("%ld %ld",&b,&w);
        long x,y,z;
        long cost=0;
        scanf("%ld %ld %ld",&x,&y,&z);
        if(x+z<=y)
            cost=b*x+w*(x+z);

        else if(y+z<=x)
            cost=b*(y+z)+w*y;
        else
            cost=b*x+w*y;

        printf("%ld\n",cost);
    }
    return 0;
}
