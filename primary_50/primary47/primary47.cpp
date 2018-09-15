/*************************************************************************
    > File Name: primary47.cpp
    > Author: spermakert
    > Mail: spermakert@163.com
    > Created Time: Mon 10 Sep 2018 06:37:51 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> gameArea(16);
vector<vector<int>> block(4);
int startY;
typedef struct block_b{
    int x;
    int y;
}block_b;

int main()
{
	freopen("in.in","r",stdin);
	freopen("out.out","w",stdout);

	//vector<vector<int>> gameArea(15);
	for(int i=0;i<16;i++)
	{
		gameArea[i].resize(10);
	}

	int tmp;
	for(int i=0;i<15;i++)
	{
		for(int j=0;j<10;j++)
		{
			cin>>tmp;
			gameArea[i][j] = tmp;
		}
	}

    for(int j=0;j<10;j++)
    {
        gameArea[15][j]=1; //表示边界
    }
	for(int i=0;i<4;i++)
	{
		block[i].resize(4);
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>tmp;
			block[i][j]=tmp;
		}
	}

	cin>>startY;
    startY=startY-1;

    //记忆小方块的位置
    block_b block_b_pos[4];
    int k=0;
    for(int i=3;i>=0;i--)//一定从底部提取
    {
        for(int j=0;j<4;j++)
        {
            if(block[i][j]==1)
            {
                block_b_pos[k].x=i;
                block_b_pos[k].y=j;
                k++;
            }
        }
    }

    int line = 1;
    bool isBorder = false;
    for(;;)
    {
        for(int i=0;i<4;i++)
        {
            if(gameArea[line + block_b_pos[i].x][startY+block_b_pos[i].y]==1)
            {
                isBorder=true;
                break;
            }
        }
        if(isBorder)
            break;
        line++;
    }
    line--;

    for(int i=0;i<4;i++)
    {
        gameArea[line + block_b_pos[i].x][startY+block_b_pos[i].y]=1;
    }

	for(int i=0;i<15;i++)
	{
		for(int j=0;j<10;j++)
		{
			cout<<gameArea[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
