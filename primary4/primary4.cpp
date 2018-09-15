/*************************************************************************
    > File Name: primary4.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Fri 07 Sep 2018 08:47:31 PM CST
 ************************************************************************/

#include<iostream>

using namespace std;
int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);
	
	int a,b;
	cin>>a>>b;
	//200-->20000~20099
	int tmp;
	for(int i=a*100;i<=a*100+99;i++)
	{
		tmp=i;
		if(tmp%b==0)
		{
			tmp=tmp%100;
			if(tmp==0)
				cout<<"00"<<" ";
			else
				cout<<tmp<<" ";
		}
	}
	cout<<endl;
	return 0;
}
