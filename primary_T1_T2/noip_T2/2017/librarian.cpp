/*************************************************************************
    > File Name: librarian.cpp
    > Author: spermakert
    > Mail: spermakert@163.com
    > Created Time: Fri 24 Aug 2018 06:00:26 PM CST
 ************************************************************************/

#include<iostream>
#include<math.h>
using namespace std;
#define MAX			1000
int min(int a,int b);
int main()
{

    freopen ("librarian.in","r",stdin);
    freopen ("librarian.out","w",stdout);
	int n,q;
	scanf("%d %d",&n,&q);
	int n_code[MAX],q_num[MAX],q_len[MAX]; //编码数组、位数数组、需求吗数组
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&n_code[i]);
	}
	for(j=0;j<q;j++)
	{
		scanf("%d %d",&q_len[j],&q_num[j]);
	}


	int code_tmp;
	int code_min=10000001;
	for(i=0;i<q;i++)
	{
		for(j=0;j<n;j++)
		{

			code_tmp = n_code[j]%(int)pow(10,q_len[i]);

			if(code_tmp==q_num[i])
			{
				code_min=min(code_min,n_code[j]);
			}
		}
		if(10000001==code_min)
			printf("%d\n",-1);
        else
            printf("%d\n",code_min);

        code_min=10000001;

	}
	return 0;
}
int min(int a,int b)
{
	return a<b?a:b;
}
