#include<iostream>

int min(int a,int b);

int main()
{
    freopen("in.in","r",stdin);
    freopen("out.out","w",stdout);

    int n;
    int num,price;
    int cost;
    int minCost=2000000000;
    scanf("%d",&n);
    for(int i=0;i<3;i++)
    {
        scanf("%d %d",&num,&price);
        if(n%num==0)
        {
            price = n/num * price;//60分
        }
        else
        {
            price = (n/num + 1) * price;
        }
        minCost = min(minCost,price);
    }
    printf("%d",minCost);
    return 0;
}
int min(int a,int b)
{
    return a<b?a:b;
}
