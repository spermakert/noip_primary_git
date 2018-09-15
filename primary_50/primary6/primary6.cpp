/*************************************************************************
    > File Name: primary6.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Fri 07 Sep 2018 09:33:45 PM CST
 ************************************************************************/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);

	int num,ans=0;
	
	cin>>num;

	int k = num;
	while(num>0)
	{
		ans = ans * 10 + num%10;
		num=num/10;
	}

	if(ans==k)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

	return 0;
}
