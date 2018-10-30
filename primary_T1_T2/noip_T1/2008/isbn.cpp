/*************************************************************************
    > File Name: isbn.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sun 16 Sep 2018 10:04:40 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	freopen("isbn.in","r",stdin);
	//freopen("isbn.out","w",stdout);
	char isbn[13];
	int i=0,num=0;
	while(cin>>isbn[i])
	{
		i++;
	}
	num = (isbn[0] - '0') + (isbn[2] - '0')*2 + (isbn[3] - '0')*3 + (isbn[4] - '0')*4;
	num = num+(isbn[6] - '0')*5 + (isbn[7] - '0')*6 + (isbn[8] - '0')*7+ (isbn[9] - '0')*8 + (isbn[10] - '0')*9;

	num%=11;
	if(num==10)
	{
		if(isbn[12]=='X')
		{
			cout<<"Right"<<endl;
		}
		else
		{
			isbn[12]='X';
			for(int i=0;i<13;i++)
				cout<<isbn[i];
		}
	}
	else if(num==isbn[12]-'0')
	{
		cout<<"Right"<<endl;
	}
	else
	{
		isbn[12]=num+'0';
		for(int i=0;i<13;i++)
			cout<<isbn[i];
	}
	cout<<endl;
	return 0;
}
