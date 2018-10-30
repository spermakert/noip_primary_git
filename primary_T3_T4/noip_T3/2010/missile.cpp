/*************************************************************************
    > File Name: missile.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Thu 25 Oct 2018 02:26:08 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct missile{
	int x,y,r1,r2;
}miss[100005];

int cmp(const missile a,const missile b)
{
	return a.r1<b.r1;
}
int main()
{
	freopen("missile.in","r",stdin);
	//freopen("missile.out","w",stdout);

	int x1,x2,y1,y2,n;
	cin>>x1>>y1>>x2>>y2>>n;
	int tx,ty;
	int r1,r2;
	for(int i=1;i<=n;i++)
	{
		cin>>tx>>ty;
		miss[i].r1 = (x1-tx) * (x1-tx) + (y1-ty) * (y1-ty);
		miss[i].r2 = (x2-tx) * (x2-tx) + (y2-ty) * (y2-ty);
	}
	sort(miss+1,miss+1+n,cmp);

	int mr2 =0;
	int ans =0x7fffffff;
	for(int i=n;i>=1;i--)
	{
		mr2 = max(mr2,miss[i+1].r2);	
		ans = min(ans,miss[i].r1 + mr2);
	}

	cout<<ans<<endl;
	return 0;
}
