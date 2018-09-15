/*************************************************************************
    > File Name: primary32.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sun 09 Sep 2018 04:02:54 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);

	int n,tmp;
	cin>>n;

	vector<int> _v;
	for(int i=0;i<n;i++)
	{
		cin>>tmp;
		_v.push_back(tmp);
	}

	int ans=0;
	for(int i=0;i<n;i++) 
	{
		for(int j=i+1;j<n;j++)
		{
			if(_v[i] + _v[j]==0)
				ans++;
		}
	}

	cout<<ans<<endl;
	return 0;
}
