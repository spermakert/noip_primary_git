/*************************************************************************
    > File Name: mine.cpp
    > Author: spermakert
    > Mail: spermakert@163.com
    > Created Time: Fri 25 Aug 2018 16:16:46 PM CST
 ************************************************************************/

#include<iostream>
#include<math.h>


using namespace std;
int gcd(int a,int b);
int minSwap(int a,int b);

int main()
{

    freopen ("ratio.in","r",stdin);
    freopen ("ratio.out","w",stdout);
    int A,B,L;
    cin>>A>>B>>L;



    int min_num=1000000,tmp,A_out,B_out,t,k;
    for(int i=1;i<=L;i++)
    {
        for(int j=1;j<=L;j++)
        {
            if(gcd(i,j)==1)
            {
                //i/j - A/B >0 --> (i*B)/j*B - (j*A)/j*B
                if(i*B>=j*A)
                {
                    tmp = i*B-j*A;
                    if(min_num>tmp)
                    {
                        min_num=tmp;
                        A_out=i;
                        B_out=j;
                    }
                }
            }
        }
    }
    cout<<A_out<<" "<<B_out;

	return 0;
}
int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
