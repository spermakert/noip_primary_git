/*************************************************************************
    > File Name: primary1.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Fri 07 Sep 2018 07:57:41 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
bool checkPrime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);

	int n,i;
	cin>>n;
	
	if(checkPrime(n))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

	return 0;
}
