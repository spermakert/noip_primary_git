/*************************************************************************
    > File Name: seat.cpp
    > Author: spermakert
    > Mail: spermakert@163.com
    > Created Time: Fri 28 Aug 2018 17:00:05 PM CST
 ************************************************************************/
#include<iostream>

using namespace std;
typedef struct LINE{
    int pos;
    int num;
}LINE;

int main()
{
    freopen ("seat.in","r",stdin);
    freopen ("seat.out","w",stdout);
    int m,n,k,l,d;
    cin>>m>>n>>k>>l>>d;//m line,n col
    int x1,y1,x2,y2;
    int stu[1001][1001];
    LINE line[1010];

    //行列初始化 从1开始
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            stu[i][j]=0;
        }
    }

   for(int i=0;i<d;i++)
   {
        cin>>y1>>x1>>y2>>x2;
        stu[y1][x1]=i+1;//要和线的位置对应
        stu[y2][x2]=i+1;
   }




    for(int i=1;i<=m;i++)
    {
        line[i].pos=i;//线的位置
        line[i].num=0;
    }
    int tmp=0;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(stu[i][j]==stu[i][j+1]&&stu[i][j]!=0)
            {
                tmp++;
            }
        }
        line[i].pos=i;
        line[i].num=tmp;
        tmp=0;
    }

    for(int i=1;i<=m-1;i++)
    {
        for(int j=1;j<=m-1-i;j++)
        {
            if(line[j].num<line[j+1].num)
            {
                swap(line[j].num,line[j+1].num);          
				swap(line[j].pos,line[j+1].pos);
            }
        }
    }

    for(int i=1;i<=k;i++)
    {
        cout<<line[i].pos<<" ";
    }

    cout<<"\n";

    //
    for(int i=1;i<=n;i++)
    {
        line[i].pos=i;//线的位置
        line[i].num=0;
    }
    tmp=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(stu[i][j]==stu[i][j+1]&&stu[i][j]!=0)
            {
                tmp++;
            }
        }
        line[i].pos=i;
        line[i].num=tmp;
        tmp=0;
    }

    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=n-1-i;j++)
        {
            if(line[j].num<line[j+1].num)
            {
                swap(line[j].num,line[j+1].num);
                swap(line[j].pos,line[j+1].pos);
            }
        }
    }

    for(int i=1;i<=l;i++)
    {
        cout<<line[i].pos<<" ";
    }

    return 0;
}
