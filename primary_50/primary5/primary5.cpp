/*************************************************************************
    > File Name: primary5.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Fri 07 Sep 2018 09:18:26 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);

	string str;
	getline(cin,str);
	

	int strl=str.size();
	int k,ans=0;
	for(int i=0;i<strl;i++)
	{
		k=str[i]-'0';
		if(k>=0&&k<=9)
			ans++;
	}

	cout<<ans<<endl;

	return 0;
}
