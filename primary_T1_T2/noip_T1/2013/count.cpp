#include <iostream>
using namespace std;

int main()
{
    freopen("count.in","r",stdin);
    freopen("count.out","w",stdout);

    int n,x,tmp,count=0;
    scanf("%d %d",&n,&x);
    //1 2 3 4 5 6 7 8 9 10 11
    //1
    for(int i=1;i<=n;i++)
    {
        tmp=i;
        while(tmp!=0)
        {
            if(tmp%10==x)
                count++;
            tmp=tmp/10;
        }
    }
    printf("%d",count);
    return 0;
}
