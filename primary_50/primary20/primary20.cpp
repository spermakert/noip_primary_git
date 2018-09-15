/*************************************************************************
    > File Name: primary20.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sat 08 Sep 2018 05:54:12 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);

	int day;
	cin>>day;

	int ans=0;

	int con=1;
	int _day=1;
	while(day>0)
	{
		ans = ans + con;
		if(_day==con)
		{
			con++;
			_day=0;
		}
		_day++;
		day--;
	}

	cout<<ans<<endl;

	return 0;
}
