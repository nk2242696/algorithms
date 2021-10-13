#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[154];
void fun()
{
	arr[0]=1;
	int i2=0;
	int i3=0;
	int i5=0;
	int nex_2=2;
	int nex_3=3;
	int nex_5=5;
	int j=1;
	while(j<=150)
	{
		int x=min(min(nex_2,nex_3),nex_5);
		arr[j++]=x;
		if(x==nex_2)
		{
			i2+=1;
			nex_2=2*arr[i2];
		}
		if(x==nex_3)
		{
			i3+=1;
			nex_3=3*arr[i3];
		}
		if(x==nex_5)
		{
			i5+=1;
			nex_5=5*arr[i5];
		}
	}
}
int main() {
	int n;
	cin>>n;
	fun();
	cout<<arr[149];
	return 0;
}
