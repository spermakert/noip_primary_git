/*************************************************************************
    > File Name: primry16.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sat 08 Sep 2018 04:21:57 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int fib(int day)
{
	if(day==1)
		return 1;
	return 2 * (fib(day-1) + 1);
}

int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);

	int n,ans;
	ans=1;
	cin>>n;

	for(int i=n-1;i>0;i--)
	{
		ans = 2*(ans + 1);
		//cout<<ans<<endl;
	}

	cout<<ans<<endl;
	cout<<fib(n)<<endl;//recursion

	return 0;
}
