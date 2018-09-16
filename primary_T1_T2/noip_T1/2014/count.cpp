#include <iostream>
#include <math.h>
using namespace std;
#define MAXSIZE       100000



int main()
{
    freopen("count.in","r",stdin);
    freopen("count.out","w",stdout);
    int number[MAXSIZE];
    int b_number[MAXSIZE];
    int n,count=0;;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
        b_number[i]=number[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
            {
                for(int k=0;k<n;k++)
                {
                    if(number[i]+number[j]==b_number[k])
                    {
                        count++;
                    }
                }
            }
        }
    }

    printf("%d",count);
    return 0;
}
