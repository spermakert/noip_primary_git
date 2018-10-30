/*************************************************************************
    > File Name: escape.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sun 21 Oct 2018 03:42:26 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;



int _M,_S,_T;

int main()
{
	freopen("escape.in","r",stdin);
	//freopen("escape","w",stdout);
	//
	cin>>_M>>_S>>_T;
	int sm = 0;
	int sl = 0;
	int dp = 0;
	for(int i=1;i<=_T;i++)
	{
		if(_M>=10)
		{
			_M = _M - 10;
			sm = sm + 60;
		}
		else
		{
			_M = _M + 4;
		}

		sl = sl + 17;
		sl = max(sl,sm);

		if(sl >= _S)
		{
			cout<<"Yes"<<endl;
			cout<<i<<endl;
			return 0;
		}
	}
	cout<<"No"<<endl;
	cout<<sl<<endl;
	return 0;
}
