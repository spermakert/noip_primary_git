/*************************************************************************
    > File Name: treasure.cpp
    > Author: spermakert
    > Mail: spermakert@163.com
    > Created Time: Fri 26 Aug 2018 13:59:43 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

typedef struct room{
    int isfloor;
    int room_point;
}ROOM;

int main()
{
    freopen ("treasure.in","r",stdin);
    freopen ("treasure.out","w",stdout);
    int n,m;
    cin>>n>>m;
    ROOM room[n][m];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>room[i][j].isfloor>>room[i][j].room_point;
        }
    }
    int start_num;
    cin>>start_num;

    //开始的指示点为0层的
    int point;
    int k=1; //指示牌次数计数器
    int ans=0;

    for(i=0;i<n;i++)
    {
        k=1;
        point=room[i][start_num].room_point;
        while(k<=point)
        {
            start_num++;      //题目要求找下一个，因此先对房间自增
            if(start_num == m)//当超出最大房间数时
            {
                start_num=0;
            }
            if(room[i][start_num].isfloor==1)
            {
                k++;
            }
        }
        ans = ans + point%20123;
    }

    cout<<ans%20123;
    return 0;
}
