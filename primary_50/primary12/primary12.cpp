/*************************************************************************
    > File Name: primary12.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sat 08 Sep 2018 10:52:24 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int checknum(int a)
{
	return a & 1;
}
int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);

	int n;
	cin>>n;

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=2*i-1;k++)
		{
			cout<<k;
		}
		cout<<endl;
	}

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<" ";
		}
	for(int k=1;k<=2*(n-i)-1;k++)
		{
			cout<<k;
		}
		cout<<endl;
	}
	return 0;
}
