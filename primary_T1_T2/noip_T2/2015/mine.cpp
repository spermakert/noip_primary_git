/*************************************************************************
    > File Name: mine.cpp
    > Author: spermakert
    > Mail: spermakert@163.com
    > Created Time: Fri 25 Aug 2018 12:59:26 PM CST
 ************************************************************************/

#include<iostream>
#include<math.h>

#define MAXVAL          100
using namespace std;
char serch_mine(int i,int j,int n,int m);

char mine[MAXVAL][MAXVAL];
int main()
{

    freopen ("mine.in","r",stdin);
    freopen ("mine.out","w",stdout);
	int n,m,i,j;
	cin>>n>>m;
    char mine_out[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>mine[i][j];
        }
    }
    /*
        * * *
        * * *
        * * *
        对每一位进项山下左右斜的遍历，把数字填充到数组里
        情况如下：
        mine[i+1][j] mine[i-1][j] mine[i][j+1] mine[i][j-1]
        mine[i-1][j-1] 左下 mine[i-1][j+1] 左上 mine[i+1][j-1] 右下 mine[i+1][j+1] 右上
        当i和j处于边界时候，需要特殊考虑，既保障i>=0;j>=0 && i<n;j<m
    */
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(mine[i][j]=='?')
            {
                mine_out[i][j]=serch_mine(i,j,n,m);
            }
            else
            {
                mine_out[i][j]='*';
            }
        }
    }
    //输出
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<mine_out[i][j];
        }
        cout<<"\n";
    }
	return 0;
}
char serch_mine(int i,int j,int n,int m)
{
    int count=0;
    //8个方向8个情况
    if(i-1>=0 && j-1>=0 && mine[i-1][j-1]=='*')
        count++;
    if(i-1>=0 && j+1<m && mine[i-1][j+1]=='*')
        count++;
    if(i+1<n && j+1<m && mine[i+1][j+1]=='*')
        count++;
    if(i+1<n && j-1>=0 && mine[i+1][j-1]=='*')
        count++;
    if(j+1<m && mine[i][j+1]=='*')
        count++;
    if(j-1>=0 && mine[i][j-1]=='*')
        count++;
    if(i-1>=0 && mine[i-1][j]=='*')
        count++;
    if(i+1<n && mine[i+1][j]=='*')
        count++;
    return count+'0';
}


