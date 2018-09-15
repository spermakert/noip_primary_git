/*************************************************************************
    > File Name: primary34.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sun 09 Sep 2018 07:02:34 PM CST
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
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>tmp;
		v.push_back(tmp);
	}

	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(v[i]==v[j])
				count++;
		}
		cout<<count<<" ";
		count=0;
	}
	cout<<endl;
	return 0;
}
