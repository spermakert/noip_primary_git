/*************************************************************************
    > File Name: isbn.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sun 16 Sep 2018 10:04:40 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	freopen("isbn.in","r",stdin);
	freopen("isbn.out","w",stdout);
	string isbn;
	getline(cin,isbn);

	vector<char> isbn_check;
	isbn_check.push_back(isbn[0]);
	for(int i=2;i<5;i++)
	{
		isbn_check.push_back(isbn[i]);
	}
	for(int i=6;i<11;i++)
	{
		isbn_check.push_back(isbn[i]);
	}

	int dis = 0;
	int tmp_num = 0;

	for(int i=0;i<9;i++)
	{
		tmp_num = isbn_check[i] - '0';
		dis = dis + tmp_num * (i+1);
	}

	dis = dis % 11;
	int dis_isbn = isbn[12] - '0';
	if(dis_isbn==dis && dis_isbn!=10)
	{
		cout<<"Right"<<endl;
	}
	else
	{
		for(int i=0;i<9;i++)
		{
			if(i==1)
				cout<<"-";
			if(i==5)
				cout<<"-";
			cout<<isbn_check[i];
		}
		cout<<"-";
		if(dis==10)
			cout<<"X";
		else
			cout<<dis;
		cout<<endl;
	}
	return 0;
}
