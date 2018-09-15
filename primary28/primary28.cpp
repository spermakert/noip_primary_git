/*************************************************************************
    > File Name: primary28.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sun 09 Sep 2018 03:20:13 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	//freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);

	int day = 30;
	double ans=0.01;
	for(int i=2;i<=day;i++)
	{
		ans = ans + ans * 2;
		//cout<<ans<<endl;
	}

	printf("%.2f",ans);

	return 0;
}
