#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, n, c, m;
    scanf("%d", &t);
    while ( t-- )
    {
        scanf("%d %d %d",&n,&c,&m);
        int choc,wrap;
       {

         choc=(n/c)+(n/c)/m;
            wrap=(n/c)/m+(n/c)%m;
            choc=choc+wrap/m;


        }
        printf("%d\n",choc);
    }
    return 0;
}
