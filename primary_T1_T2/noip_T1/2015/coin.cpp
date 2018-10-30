#include<iostream>
using namespace std;
int main()
{
    freopen("coin.in","r",stdin);
    freopen("coin.out","w",stdout);

    int k;
    int money=0,i=1;
    int money_day=1;
    scanf("%d",&k);
    for(int day=1;day<=k;day++)
    {
        money=money+money_day;
        if(i==money_day)
        {
            money_day++;
            i=0;
        }
        i++;
    }
    printf("%d",money);
    return 0;
}
