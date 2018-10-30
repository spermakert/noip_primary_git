#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    freopen("prime.in","r",stdin);
    //freopen("prime.out","w",stdout);
    long long n;
    scanf("%lld",&n);
    for(long long i=2;i*i<n;i++)
    {
        if(n%i==0)
        {
            printf("%lld",n/i);
            return 0;
        }
    }
    return 0;
}