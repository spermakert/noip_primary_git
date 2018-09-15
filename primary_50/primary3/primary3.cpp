/*************************************************************************
    > File Name: primary3.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Fri 07 Sep 2018 08:30:10 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	int score;
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);
	cin>>score;

	if(score>=90&&score<=100)
		cout<<"A"<<endl;
	else if(score>=80&&score<90)
		cout<<"B"<<endl;
	else if(score>=70&&score<80)
		cout<<"C"<<endl;
	else if(score>=60&&score<70)
		cout<<"D"<<endl;
	else
		cout<<"E"<<endl;


	return 0;
}
