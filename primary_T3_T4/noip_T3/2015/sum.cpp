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
int sum = 0;
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
	}

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			//5 5 3 2 2 2
			//1 2 3 4 5 6
			if((i)%2==0 && (j)%2==0 && _color[i]==_color[j] && j>i)
			{
				sum = sum + (_num[i] + _num[j]) * (i+j);//60
			}
			else if((i)%2==1 && (j)%2==1 && _color[i]==_color[j] && j>i)
			{
				sum = sum + (_num[i] + _num[j]) * (i+j);//40
			}
		}
	}

	cout<<sum%10007<<endl;
	return 0;
}
