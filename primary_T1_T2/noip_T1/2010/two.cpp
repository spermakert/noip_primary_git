#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    freopen("two.in","r",stdin);
    freopen("two.out","w",stdout);
    //2 3 4 5 6 7 8 9 10 11 12 13 14 15...19 20 21 22
    int n,m,k,count=0;
    scanf("%d %d",&n,&m);
    for(int i=n;i<m+1;i++)
    {
        k=i;
        while(k!=0)
        {
            if(k%10==2)
            {
                count++;
            }
            k=k/10;
        }
    }
    printf("%d",count);
    return 0;
}
