#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int size ,ans2=0,ans1=0,ans;
            scanf("%d",&size);

            int arr[size*size];
            for(int i=0;i<size*size;i++)

                scanf("%d",&arr[i]);
            for(int i=0;i<size*size;i=i+size+1)
                {
          ans1=ans1+arr[i];

               // ans2=ans2+arr[i][j];

            }
            for(int n=size-1;n<size*size-1;n=n+size-1)

                {
                ans2=ans2+arr[n];
            }
           ans=ans2-ans1;
            if(ans>0)
                printf("%d",ans);
            else
                printf("%d",-ans);


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
