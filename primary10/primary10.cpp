/*************************************************************************
    > File Name: primary10.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sat 08 Sep 2018 10:36:03 AM CST
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

	str[0] = str[0] - 32;
	int n=str.size();
	for(int i=1;i<n;i++)
	{
		if(str[i]==' ')
		{
			str[i+1] = str[i+1] - 32;
		}
	}
	cout<<str<<endl;
	return 0;
}
