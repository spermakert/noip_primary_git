/*************************************************************************
    > File Name: expr.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Mon 17 Sep 2018 03:23:43 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	freopen("expr.in","r",stdin);
	freopen("expr.out","w",stdout);

	string expr_str;
	getline(cin,expr_str);

	vector<char> symbol;
	vector<int> num;

	//1+2*4*6+6+7
	//
	int len = expr_str.size();
	int tmp_num = 0;
	for(int i=0;i<len;i++)
	{
		if(expr_str[i]=='*' || expr_str[i]=='+')
		{
			num.push_back(tmp_num);
			symbol.push_back(expr_str[i]);
			tmp_num = 0;
		}
		else
			tmp_num = tmp_num * 10 + (expr_str[i] - '0') % 10;
	}
	num.push_back(tmp_num);

	int ans = 0;
	int symbol_len = symbol.size();
	for(int i=0;i<symbol_len;i++)
	{
		if(symbol[i]=='*')
		{
			num[i+1] = num[i] * num[i+1];
			num[i] = 0;
		}
	}
	int num_len = num.size();
	for(int i=0;i<num_len;i++)
	{
		ans = ans + num[i];
	}

	cout<<ans<<endl;

	return 0;
}
