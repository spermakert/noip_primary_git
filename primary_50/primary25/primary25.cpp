/*************************************************************************
    > File Name: mine.cpp
    > Author: spermakert
    > Mail: spermakert@163.com
    > Created Time: Fri 26 Aug 2018 10:12:26 PM CST
 ************************************************************************/
#include<iostream>
#include<math.h>
#include<string>
using namespace std;

static int nums[300];
static char symbol[300];
int main()
{
    freopen ("in.in","r",stdin);
    freopen ("out.out","w",stdout);
    string str;
    cin>>str;
    int strlen = str.size();
	//
	int num=0;
	int j=0;
	for(int i=0;i<strlen;i++)
	{
		if(str[i]=='*' || str[i]=='+')
		{
			nums[j]=num;
			symbol[j]=str[i];
			num=0;
			j++;
		}
		else
		{
			num = num * 10 + str[i]-'0';
		}
	}
	//2+7+5*5*6+9+2

	for(int i=0;i<j;i++)
	{
		if(symbol[i]=='*')
		{			
		   nums[i+1] = nums[i] * nums[i+1];
		   nums[i] = 0;
		}
	}
	int ans=0;
	for(int i=0;i<j;i++)
	{
		ans=ans+nums[i];
	}

	cout<<ans<<endl;

    return 0;
}
