/*************************************************************************
    > File Name: primary45.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Thu 13 Sep 2018 01:41:02 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);

	int n;
	cin>>n;

	vector<string> name_left;
	vector<string> name_right;

	string tmp_name;
	int in;
	for(int i=0;i<n;i++)
	{
		cin>>in;
		cin>>tmp_name;
		if(in==0)
		{
			name_left.push_back(tmp_name);
		}
		else
		{
			name_right.push_back(tmp_name);
		}
	}

	int a=name_left.size();
	int b=name_right.size();
	for(int i=a;i>=0;i--)
	{
		cout<<name_left[i]<<endl;
	}
	for(int i=0;i<b;i++)
	{
		cout<<name_right[i]<<endl;
	}

	return 0;
}
