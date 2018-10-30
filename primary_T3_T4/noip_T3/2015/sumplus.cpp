/*************************************************************************
    > File Name: sum.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Fri 28 Sep 2018 10:14:35 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int _color[100005];
int _num[100005];
int _ans[1000005][2];
int _len[1000005][2];
long long ans;
int _mod = 10007;
int main()
{
	freopen("sum.in","r",stdin);
	//freopen("sun.out","w",stdout);
	
	int m,n;
	cin>>n>>m;
	int tmp_data;
	for(int i=1;i<=n;i++)
	{
		cin>>tmp_data;
		_num[i] = tmp_data;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>tmp_data;
		_color[i] = tmp_data;
		_ans[tmp_data][i&1] = _ans[tmp_data][i&1] + _num[i];
		_len[tmp_data][i&1]++;
        _ans[tmp_data][i&1]%=_mod;
        _len[tmp_data][i&1]%=_mod;
	}


	for(int i=1;i<=n;i++)
	{
		//ans = ans + (_ans[_color[i]][i&1] + (_len[_color[i]][i&1] - 2)*_num[i]) * i;
		ans = ans + (_ans[_color[i]][i&1] + (_len[_color[i]][i&1] - 2)*_num[i]%_mod) * i%_mod;
	}

	cout<<ans%_mod<<endl;
	return 0;
}
