/*************************************************************************
    > File Name: primary2.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Fri 07 Sep 2018 08:15:51 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

bool checkFlower(int n)
{
	//153
	int i,j,k;
	i=n%10; //3
	j=(n/10)%10; //5
	k=(n/100)%10; //1

	if((i*i*i + j*j*j + k*k*k)==n)
		return true;
	return false;
}

int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);

	int m,n;
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{
		if(checkFlower(i))
			cout<<i<<" ";
	}

	cout<<endl;

	return 0;
}
