/*************************************************************************
    > File Name: primary15.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sat 08 Sep 2018 04:11:53 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int fib(int n)
{
	if(n=1)
		return 2;
	if(n==2)
		return 3;
	return fib(n-1) + fib(n-2);
}

int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);

	int n;
	cin>>n;

	cout<<fib(n+2)<<endl;

	return 0;
}
