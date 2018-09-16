#include<iostream>
using namespace std;
int a,b,c;
int ans;
int main()
{
    freopen ("score.in","r",stdin);
    freopen ("score.out","w",stdout);
    scanf ("%d %d %d",&a,&b,&c);
    //不能写小数
    //ans=a*0.2+b*0.3+c*0.5;
    ans=a*2/10+b*3/10+c*5/10;
    printf ("%d",ans);
    return 0;
}
