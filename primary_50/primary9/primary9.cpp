/*************************************************************************
    > File Name: primary9.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sat 08 Sep 2018 10:02:07 AM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);


	int n;
	cin>>n;

	vector<int> v;
	int score;
	for(int i=0;i<n;i++)
	{
		cin>>score;
		v.push_back(score);
	}

	sort(v.begin(),v.end());

	double score_all = 0;
	for(int i=1;i<n-1;i++)
	{
		score_all = score_all + v[i];
	}

	//cout<<score_all/(n-2)<<endl;
	printf("%.2f",score_all/(n-2));
	return 0;
}
