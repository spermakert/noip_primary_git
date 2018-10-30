#include<iostream>
#include<algorithm>
using namespace std;
int n,m,ans=0;
int np[10001],s[10001],e[10001];
int cmp(int a,int b)
{
	return a>b;
}
int main()
{
	freopen("water.in","r",stdin);
	freopen("water.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>np[i];
	}

	//接水人数小于等于龙头，输出最大节水量
	if(n<=m)
	{
		sort(np,np+n,cmp);
		cout<<np[0]<<endl;
	}
	else if(n>m)
	{
		int i,j,k=0;
		for(i=0;i<m;i++)
		{
			s[i] = np[i];//开始界水人数
		}
		for(j=i,k=0;j<=n;j++,k++)
		{
			e[k] = np[j];//排队的
		}
		k = i;
		j=0;
		while(n>0)
		{
			for(i=0;i<k;i++)
			{
				s[i]--;//初始接水的人每一秒水量减少
			}
			ans++;//时间
			for(i=0;i<k;i++)
			{
				if(s[i]==0)  
				{
					s[i]+= e[j];//如果有人接完，把剩下排队的插进去
					j++;
					n--;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
