/*************************************************************************
    > File Name: primary33.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sun 09 Sep 2018 04:37:47 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	freopen("in.in","r",stdin);
	//freopen("out.out","w",stdout);

	int n;
	cin>>n;

	int tmp=0;
	vector<int> _v;
	for(int i=0;i<n;i++)
	{
		cin>>tmp;
		_v.push_back(tmp);
	}

	vector<int> k;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(_v[i] == _v[j])
			{
				ans = ans + 1;
			}
		}
		k.push_back(ans);
		ans=0;
	}

	int _ans=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(k[j] < k[j+1])
			{
				swap(_v[j],_v[j+1]);
				swap(k[j],k[j+1]);
			}
		}
	}

	_ans=_v[0]; //如果不存在多个，则为第一个
	//判断是否存在多个相等的
	for(int i=0;i<n;)
	{
		if(k[i]==k[i+1])
		{
			if(_v[i] > _v[i+1])
			{
				_ans = _v[i+1];
			}
		}
		i=i+2;
	}

	for(int i=0;i<n;i++)
	{
		cout<<_v[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<k[i]<<" ";
	}
	cout<<endl;

	cout<<_ans<<endl;
	
	return 0;
}
