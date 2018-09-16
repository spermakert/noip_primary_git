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

static int nums[100002]={0};
static char symbol[100001];

int main()
{
    freopen ("expr.in","r",stdin);
    freopen ("expr.out","w",stdout);
    string str;
    cin>>str;
    str=str+"+0";
    int strlen = str.size();
    int i=0,j=0;
    int numtmp=0;
    while(i<strlen)
    {

        if(str[i]=='*'||str[i]=='+')
        {
            symbol[j+1]=str[i];
            //存放到数字数组中
            nums[j] = numtmp;
            numtmp=0;
            j++;
        }
        else
        {
            numtmp = numtmp*10+str[i]-'0';
        }
        i++;
    }



    int k=0;
    int mulit_value=0;
    //先算乘法
    while(k<=j)
    {
        if(symbol[k]=='*')
        {
            nums[k+1] = (nums[k-1]%10000) * (nums[k+1]%10000);
            nums[k-1] = 0;
        }
        k++;
    }

    //剩下数字相加
    k=0;
    while(k<=j)
    {
        mulit_value = (mulit_value + nums[k])%10000;
        k++;
    }
    cout<<mulit_value;
    return 0;
}