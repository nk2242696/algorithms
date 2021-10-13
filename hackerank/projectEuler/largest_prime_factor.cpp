#include<iostream>
#include<math.h>
using namespace std;
int main()
{int cases;
 cin>>cases;
 while(cases--)
     {
    long long  number;
    cin>>number;
    long long i=2;
    while(i<=sqrt(number)&&number!=1)
    {
        if(number%i==0)
            number=number/i;
        else
            i++;
    }
     if(number>1)
         cout<<number<<endl;
     else
         cout<<i<<endl;
 }
    return 0;

 }
