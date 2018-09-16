#include <iostream>
#include <math.h>
#define MAXLEN         10
using namespace std;

int main()
{
    freopen("reverse.in","r",stdin);
    freopen("reverse.out","w",stdout);

    int n,k=0,ans=0;
    int num[MAXLEN];
    scanf("%d",&n);
    while(n!=0)
    {
        num[k]=n%10;
        n=n/10;
        k++;
    }
    for(int i=0,j=k-1;i<k;i++,j--)
    {
        ans=ans+num[i]*pow(10,j);
    }
    printf("%d\n",ans);
    return 0;
}
