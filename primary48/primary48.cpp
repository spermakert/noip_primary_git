/*************************************************************************
    > File Name: primary48.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Thu 13 Sep 2018 02:18:25 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);


	int n,k;
	vector<int> w;
	cin>>n>>k;
	int t_w;
	for(int i=0;i<n;i++)
	{
		cin>>t_w;
		w.push_back(t_w);
	}


	int p=0;
	int wp=0;
	int ans=0;
	while(p<n)
	{
		wp = wp + w[p];
		//cout<<wp<<" ";
		if(wp>=9)
		{
			ans++;
			wp=0;
		}
		p++;
	}
	if(wp>0)
		ans++;
	cout<<ans<<endl;
	return 0;
}
