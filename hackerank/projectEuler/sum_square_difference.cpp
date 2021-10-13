#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long cases;
    scanf("%ld",&cases);
    while(cases--)
        {
        long num,ans,ans2;
        scanf("%ld",&num);
        ans=num*(num+1)*(2*num+1)/6;
        ans2=(num*(num+1)/2)*(num*(num+1)/2);
        printf("%ld\n",ans2-ans);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
