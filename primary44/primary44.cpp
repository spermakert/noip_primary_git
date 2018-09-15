/*************************************************************************
    > File Name: primary44.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sun 09 Sep 2018 08:38:21 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);

	//打表，观察，发现递推，fib
	int n,ans;
	cin>>n;

	if(n<3)
		ans=n;
	else
	{
		int a=1,b=2;
		for(int i=3;i<=n;i++)
		{
			ans = a + b;
			a = b;
			b = ans;
		}
	
	}
	cout<<ans<<endl;
	return 0;
}
