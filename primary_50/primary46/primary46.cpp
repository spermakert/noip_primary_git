/*************************************************************************
    > File Name: primary46.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sun 09 Sep 2018 09:09:04 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);

	string str;
	getline(cin,str);

	int len = str.size();

	int sta=0,end=0;
	for(int i=0;i<len;i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			sta=i;
			break;
		}
	}

	//翻转一下
	string _str(str.rbegin(),str.rend());
	for(int i=0;i<len;i++)
	{
		if(_str[i]>='A' && _str[i]<='Z')
		{
			end=i;
			break;
		}
	}
	end = len - end -1;
	//cout<<sta<<" "<<end<<endl;
	
	for(int i=sta;i<=end;i++)
	{
		if(str[i]=='*')
			str[i]='\0';
	}

	cout<<str<<endl;

	return 0;
}
