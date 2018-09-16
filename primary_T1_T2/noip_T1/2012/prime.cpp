#include <iostream>
#include <math.h>
using namespace std;

bool prime(int n);
int main()
{
    freopen("prime.in","r",stdin);
    freopen("prime.out","w",stdout);

    int n;
    scanf("%d",&n);
    for(int i=n-1;i>1;i--)
    {
        if(prime(i))
        {
            if(n%i==0)
            {
                printf("%d",i);
                break;
            }
        }
    }

    return 0;
}
bool prime(int n)
{
    double k = sqrt(n);
    int i;
    for(i=2;i<k;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
