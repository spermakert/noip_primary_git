/*************************************************************************
    > File Name: cport.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Thu 27 Sep 2018 03:45:45 PM CST
 ************************************************************************/

#include<iostream>
#include<queue>
using namespace std;
struct person{
	int _ti;
	int _country;
};
int p_num[100005];
int ans = 0;
int main()
{
	freopen("cport.in","r",stdin);
	freopen("cport.out","w",stdout);
	//
	queue<person> country;
	int n;
	cin>>n;
	//ship information
	int ti,ki,ci;
	person p;
	for(int i=0;i<n;i++)
	{
		cin>>ti>>ki;
		for(int j=0;j<ki;j++)
		{
			cin>>ci;
			p._ti = ti;
			p._country = ci;
			country.push(p);
			p_num[ci]++;    //数据约定Xij是100000，因此可以用这么大数组存
			if(p_num[ci]==1)
				ans++;
		}
		while(true)
		{
			int _line_ti = country.front()._ti;
			int _line_ci = country.front()._country;
			if(ti - _line_ti<86400) //in one  day
				break;
			else                    // out of day
			{
				p_num[_line_ci]--;
				if(p_num[_line_ci]==0)
					ans--;
				country.pop();
			}
		}
		cout<<ans<<endl;
	}

	
	return 0;
}
