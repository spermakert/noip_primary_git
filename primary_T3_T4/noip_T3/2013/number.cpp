/*************************************************************************
    > File Name: number.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Fri 26 Oct 2018 11:36:31 AM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
#define MAXL	1000001
using namespace std;
typedef long long LL;
LL number[MAXL];
LL feature[MAXL];
LL sorce[MAXL];
LL temp[MAXL];
LL n,p,tmp_max;
int main()
{
	freopen("testdata.in","r",stdin);
	//freopen("number.out","w",stdout);
	
	cin>>n>>p;

	for(int i=1;i<=n;i++)
	{
		cin>>number[i];
	}
	feature[1] = number[1];
	temp[1] = feature[1];
	tmp_max = temp[1];
	for(int i=2;i<=n;i++)
	{
		temp[i] = max(temp[i-1]+number[i],number[i]);
		feature[i] = max(tmp_max,temp[i]);
		tmp_max = feature[i];
	}

	

	sorce[1] = feature[1];
	sorce[2] = feature[1] + sorce[1];
	bool fl=false;;
	if(sorce[2]>sorce[1])
		fl = true;
	for(int i=3;i<=n;i++)
	{
		if(feature[i-1]>0)
		{
			sorce[i] = sorce[i-1] + feature[i-1];
			if(sorce[i]>sorce[1])
				fl = true;
			if(sorce[i]>=1000000000)
            	sorce[i] %= p;
		}
		else //如果前一位特征值小于零，则后面的都等于第二个小朋友分数，此时当前第一个小朋友分数最大
		{
			sorce[i] = sorce[2];
			if(sorce[i]>=1000000000)
				sorce[i] %= p;
		}
	}
	
	if(fl)
		cout<<sorce[n]%p<<endl;
	else
		cout<<sorce[1]%p<<endl;
	return 0;
}
