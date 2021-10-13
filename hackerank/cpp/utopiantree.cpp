#include <iostream>
using namespace std;

int height(int n)
    {int z=1;
     if(n==0)
         z=1;
     else{
     for(int i=1;i<=n;i++)
        {

        if(i%2!=0)
            z=z*2;
        else
            z=z+1;}
     }

    return (z);
}
int main() {
    int T,a;
    cin >> T;
    while (T>0) {
        int n;
        cin >> n;
        a = height(n);
        cout<<a<<"\n";
        T--;
    }
}
