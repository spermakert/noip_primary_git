/*************************************************************************
    > File Name: primary18.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sat 08 Sep 2018 05:02:18 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int fib(int month)
{
	if(month<3)
		return 1;
	return fib(month-1) + fib(month-2);
}

int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);

	int n;
	cin>>n;

	cout<<fib(n) * 2<<endl;
	
	//题目问的是多少只兔子，不是多少对，因此×2
	//但给出的答案是按照对计算的

	return 0;
}
