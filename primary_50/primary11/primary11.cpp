/*************************************************************************
    > File Name: primary11.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sat 08 Sep 2018 10:46:25 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	if(a%b==0)
		return b;
	return gcd(b,a%b);
}

int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);

	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;

}
