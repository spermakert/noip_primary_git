/*************************************************************************
    > File Name: primary26.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sun 09 Sep 2018 02:48:02 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool check_prime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(i%n==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{

	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);

	int n,k;
	cin>>n;
	k=n;
	vector<int> _prime;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0 && check_prime(i))
		{
			_prime.push_back(i);
			n=n/i;
			i=2;
			//cout<<n<<endl;
		}
	}

	int l = _prime.size();
	cout<<k<<"=";
	for(int i=0;i<l;i++)
	{
		if(i==l-1)
		{
			cout<<_prime[i]<<endl;
		}
		else
		{
			cout<<_prime[i]<<"*";
		}
	}
	return 0;
}
