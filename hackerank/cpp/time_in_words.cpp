#include <cmath>
#include<string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int h;
    cin >> h;
    int m;
    cin >> m;
    	string word[]={"","one","two","three","four","five","six","seven","eight","nine","ten",
				"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen",
				"nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six",
				"twenty seven","twenty eight","twenty nine"};
    if(m==0)
		{
			cout<<word[h]<<" o' clock"<<endl;
		}
    else if(m<15)
        {
        cout<<word[m]<<" minutes past "<<word[h]<<endl;
    }
    else if(m==15)
        {
        cout<<"quarter past "<<word[h]<<endl;
    }
    else if(m<30)
        {
        cout<<word[m]<<" minutes past "<<word[h]<<endl;
    }
     else if(m==30)
        {
        cout<<"half past "<<word[h]<<endl;
    }
     else if(m<45)
        {
        cout<<word[60-m]<<" minutes to "<<word[h+1]<<endl;
    }
    else if(m==45)
        {
        cout<<"quarter to "<<word[h+1]<<endl;
    }
    else if(m<60)
        {
        cout<<word[60-m]<<" minutes to "<<word[h+1]<<endl;
    }

    return 0;
}
