/*************************************************************************
    > File Name: water.cpp
    > Author: spermakert
    > Mail: spermakert@163.com
    > Created Time: Fri 28 Aug 2018 11:46:44 PM CST
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

typedef struct candidate{
    int num;
    int score;
}candidate;

int main()
{
    freopen ("score.in","r",stdin);
    freopen ("score.out","w",stdout);
    int n,m;//选手数和面试数
    cin>>n>>m;
    candidate cand[n],cand_ans[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        cin>>cand[i].num>>cand[i].score;
    }

    int k=m*15/10;
    int enroll=0;

    int tmp_num,tmp_score;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(cand[j].score<cand[j+1].score)
            {
                tmp_num=cand[j].num;
                cand[j].num=cand[j+1].num;
                cand[j+1].num=tmp_num;

                tmp_score=cand[j].score;
                cand[j].score=cand[j+1].score;
                cand[j+1].score=tmp_score;
            }
        }
    }
    enroll=cand[k-1].score;//分数线

    int l=0;
    for(i=0;i<n;i++)
    {
        if(cand[i].score>=enroll)
        {
            cand_ans[i].num=cand[i].num;
            cand_ans[i].score=cand[i].score;
            l++;
        }
    }
    cout<<enroll<<" "<<l<<"\n";

    for(i=0;i<l-1;i++)
    {
        for(j=0;j<l-1-i;j++)
        {
            if(cand_ans[j].num > cand_ans[j+1].num && cand_ans[j].score==cand_ans[j+1].score)
            {
                tmp_num=cand_ans[j].num;
                cand_ans[j].num=cand_ans[j+1].num;
                cand_ans[j+1].num=tmp_num;

                tmp_score=cand_ans[j].score;
                cand_ans[j].score=cand_ans[j+1].score;
                cand_ans[j+1].score=tmp_score;
            }
        }
    }

    for(i=0;i<l;i++)
    {
        cout<<cand_ans[i].num<<" "<<cand_ans[i].score<<"\n";
    }

    return 0;
}
