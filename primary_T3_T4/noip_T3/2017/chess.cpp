/*************************************************************************
    > File Name: chess.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Thu 20 Sep 2018 06:17:27 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

int M,N;
int map_color[1005][1005];
int ans[1005][1005];
int v[4][2] = {{1,0},{0,-1},{-1,0},{0,1}};
int coin_min = 0x7fffffff;
void dfs(int x,int y,int coin,bool flag)
{
	if(ans[x][y]<=coin)
	{
		return;
	}
	ans[x][y] = coin;
	if(x==M-1 && y==M-1)
	{
		if(coin<=coin_min)
			coin_min = coin;
		return;
	}
	int tx,ty;
	for(int i=0;i<4;i++)
	{
		tx = x + v[i][0];
		ty = y + v[i][1];
		if(tx<0 || tx>=M || ty<0 || ty>=M)
		{
			continue;
		}

		if(map_color[tx][ty]==map_color[x][y])
		{
			dfs(tx,ty,coin,true);
		}
		else if(map_color[tx][ty] == 2)
		{
			if(flag)
			{
				map_color[tx][ty] = map_color[x][y];
				dfs(tx,ty,coin+2,false);
				map_color[tx][ty] = 2;
			}
		}
		else
		{
			dfs(tx,ty,coin+1,true);
		}

	}
}

int main()
{
	freopen("testdata.in","r",stdin);
	freopen("chess.out","w",stdout);
	cin>>M>>N;
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<M;j++)
		{
			ans[i][j] = 0;
			map_color[i][j] = 2;//null color
			ans[i][j] = 0x7fffffff;
		}
	}
	int x,y,c;
	for(int i=0;i<N;i++)
	{
		cin>>x>>y>>c;
		map_color[x-1][y-1] = c;
	}
	//memset(ans,127,sizeof ans);//初始化极大值
	dfs(0,0,0,1);

	if(ans[M-1][M-1]==0x7fffffff)
		cout<<-1<<endl;
	else
		cout<<ans[M-1][M-1]<<endl;
	return 0;
}