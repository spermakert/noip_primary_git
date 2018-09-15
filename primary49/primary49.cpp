/*************************************************************************
    > File Name: primary49.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Thu 13 Sep 2018 02:33:33 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);


	vector<int> cards;
	int card;
	for(int i=0;i<25;i++)
	{
		cin>>card;
		cards.push_back(card);
	}

	sort(cards.begin(),cards.end());
	
	int p=0;
	while(p<25)
	{
		if(cards[p]!= cards[p+1])
		{
			cout<<cards[p]<<endl;
			break;
		}
		p = p + 2;
	}
	return 0;
}
