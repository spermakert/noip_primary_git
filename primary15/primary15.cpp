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
	if(n<3)
		return 1;
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
