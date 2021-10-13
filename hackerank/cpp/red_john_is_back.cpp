#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

int main() {

    int solTable[41];
    solTable[1]=1;
    solTable[2]=1;
    solTable[3]=1;
    solTable[4]=2;
    for(int i=5; i<=40;i++){
        solTable[i]=solTable[i-1]+solTable[i-4];
    }


    vector<bool> primes(220000,1);
    primes[0]=false;primes[1]=false;
    for(int i=0; i<(int)sqrt((double)220000); i++){
        if(primes[i]==true){
            for(int j=i*i; j<220000; j+=i){
                primes[j] = false;
            }
        }
    }


    int primeAnswerTable[41];
    for(int i=1;i<=40;i++){
        int numPrimes=0;
        for(int j=2; j<=solTable[i];j++){
            if(primes[j])
                numPrimes++;
        }
        primeAnswerTable[i]=numPrimes;
    }


    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<primeAnswerTable[n]<<endl;
    }

    return 0;
}
