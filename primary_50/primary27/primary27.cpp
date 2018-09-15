/*************************************************************************
    > File Name: primary27.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Fri 07 Sep 2018 07:34:32 PM CST
 ************************************************************************/

#include<iostream>
#include<math.h>
using namespace std;

int return_tmp(int n,int i)
{
	int tmp=0;
	while(i>=0)
	{
		tmp=tmp+n*pow(10,i);
		i--;
	}
	cout<<tmp<<"\n";
	return tmp;
}
int main()
{
	//freopen("in.in","r",stdin);
	//freopen("out.out","w",stdout);
	int n;
	cin>>n;


	int ans=0;
	for(int i=0;i<n;i++)
	{
		ans=ans+return_tmp(n,i);
	}

	cout<<ans<<endl;

	return 0;
}
