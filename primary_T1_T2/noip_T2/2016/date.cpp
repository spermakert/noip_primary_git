/*************************************************************************
    > File Name: librarian.cpp
    > Author: spermakert
    > Mail: spermakert@163.com
    > Created Time: Fri 24 Aug 2018 06:00:26 PM CST
 ************************************************************************/

#include<iostream>
#include<math.h>
#include<string>
using namespace std;
bool checkPalindrome(int date_year);
bool isLeap(int date_year);

int main()
{

    freopen ("date.in","r",stdin);
    freopen ("date.out","w",stdout);
    int date_head,date_end;

    scanf("%d",&date_head);
    scanf("%d",&date_end);

    int date_year_head=date_head/10000;
    int date_year_end=date_end/10000;

    int count=0;
    for(int i=date_year_head;i<=date_year_end;i++)
    {
        if(checkPalindrome(i))//如果满足回文格式
        {
            count++;
        }
    }
    printf("%d",count);
	return 0;
}
//传入四位年份，验证反过来是否是合法日期
bool checkPalindrome(int date_year)
{
    //将年份反转 形成月份和日期
    int num[4];
    int tmp_year=date_year;
    for(int i=0;i<4;i++)
    {
        num[i] = tmp_year%10;
        tmp_year=tmp_year/10;
    }
    int month = 10 * num[0] + num[1];
    int day   = 10 * num[2] + num[3];
    //printf("%d-%d-%d\n",date_year,month,day);
    //合:法的月和日 [9220 0229][8220 0228] [1310 0131] [0310 0130 不用验证大小月，因为小月的年份不合法，不会出现小月是回文的情况]
    if(month<13&&month>0&&day>0&&day<32)
    {
        //验证闰年
        if(!isLeap(date_year))
        {
            if(month==2)  //非闰年2月是29也不合法
            {
                if(day==29)
                    return false;
            }
        }
        //printf("%d-%d-%d\n",date_year,month,day);
        return true;
    }
    return false;
}
bool isLeap(int date_year)
{
    if(date_year%100!=0&&date_year%4==0)
    {
        return true;
    }
    if(date_year%400 == 0)
    {
        return true;
    }
    return false;
}


