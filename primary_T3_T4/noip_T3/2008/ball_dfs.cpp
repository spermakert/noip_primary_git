/*************************************************************************
    > File Name: ball_dfs.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Mon 22 Oct 2018 04:16:34 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int n,m,ans=0;
void dfs(int x,int cnt)//第几个人，第几次
{
	if(cnt==m)
	{
		if(x==1)
			ans++;
		else
			cnt = 0;
		return;
	}
	//向左
	if(x-1<1)
	{
		dfs(n,cnt+1);
	}
	else
	{
		dfs(x-1,cnt+1);
	}
	if(x+1>n)
	{
		dfs(1,cnt+1);
	}
	else
	{
		dfs(x+1,cnt+1);
	}
}
int main()
{
	freopen("ball.in","r",stdin);
	//freopen("ball.out","w",stdout);
	cin>>n>>m;
	dfs(1,0);
	cout<<ans<<endl;
	return 0;
}
