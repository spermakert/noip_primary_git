/*************************************************************************
    > File Name: primary13.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sat 08 Sep 2018 12:53:50 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);


	int num,ans=0;
	cin>>num;
	while(num>0)
	{

		ans = ans * 10 + num%10;
		num = num / 10;
	}

	cout<<ans<<endl;
	return 0;
}
