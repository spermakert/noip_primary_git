/*************************************************************************
    > File Name: primary29.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sun 09 Sep 2018 03:32:03 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);

	vector<char> team_a={'a','b','c'};
	vector<char> team_b={'x','y','z'};

	int n = team_a.size();
	int m = team_b.size();
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(team_a[i]=='a' && team_b[j]=='x')
				continue;
			else if(team_a[i]=='c' && team_b[j]=='x')
				continue;
			else if(team_a[i]=='c' && team_b[j]=='z')
				continue;
			else
				cout<<team_a[i]<<"--"<<team_b[j]<<endl;
		}
	}


	return 0;
}
