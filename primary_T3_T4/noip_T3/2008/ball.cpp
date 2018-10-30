/*************************************************************************
    > File Name: ball.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sun 21 Oct 2018 09:37:33 PM CST
 ************************************************************************/

#include<iostream>
#define MAXL_P 31
#define MAXL_N 31
using namespace std;
int _ball[MAXL_P][MAXL_N];
int main()
{
	freopen("ball.in","r",stdin);
	//freopen("ball.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	_ball[1][0] = 1;
	_ball[1][n] = n;

	//_ball[2][1] = 1;
	//_ball[1][n] = n;
	for(int j=1;j<=m;j++)
	{
		for(int i=1;i<=n;i++)
		{
			if(i==1)
				_ball[i][j] = _ball[n][j-1] + _ball[2][j-1];
			else if(i==n)
				_ball[i][j] = _ball[n-1][j-1] + _ball[1][j-1];
			else
				_ball[i][j] = _ball[i-1][j-1] + _ball[i+1][j-1];
		}
	}

	cout<<_ball[1][m]<<endl;

	return 0;
}
