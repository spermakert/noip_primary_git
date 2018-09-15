/*************************************************************************
    > File Name: primary14.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sat 08 Sep 2018 12:59:52 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);



	string str;
	getline(cin,str);

	string ans(str.rbegin(),str.rend());
	cout<<ans<<endl;

	/*
	int n=str.size();
	for(int i=n-1;i>=0;i--)
	{
		cout<<str[i];
	}
	cout<<endl;
	*/

	return 0;
}
