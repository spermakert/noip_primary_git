/*************************************************************************
    > File Name: matrix.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Fri 28 Sep 2018 09:19:15 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int ans(int x,int y,int n)
{
	if(x==1)
		return y;
	if(x==n)
		return 3*n-1-y;
	if(y==1)
		return 4*n-2-x;
	if(y==n)
		return n+x-1;
	return ans(x-1,y-1,n-2) + 4*n-4;
}


int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);

	int n,x,y;
	cin>>n>>x>>y;
	cout<<ans(x,y,n)<<endl;
	return 0;
}
