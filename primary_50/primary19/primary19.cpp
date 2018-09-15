/*************************************************************************
    > File Name: primary19.cpp
    > Author: spermakert
    > Mail: spermakert@163.com 
    > Created Time: Sat 08 Sep 2018 05:21:51 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	freopen("out.out","w",stdout);


	// 5X + 3Y + 1/3 Z = 100 ==> 15x + 9y + z = 300
	// x + y + z = 100
	//
	int x,y,z;
	for(int i=1;i<=100;i++)
	{
		for(int j=1;j<=100;j++)
		{
			for(int k=1;k<=100;k++)
			{
				if(15*i + 9*j + k==300 && i + j + k==100)
				{
					cout<<i<<" "<<j<<" "<<k<<endl;
				}
			}
		}
	}
	return 0;
}
