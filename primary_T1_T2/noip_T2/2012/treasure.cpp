#include<iostream>
#define MAXN 10100
#define MAXM 110
#define mod 20123
using namespace std;
long long n,m,floor[10001][101],point[10001][101],c[10001],sum,start_num,ans,q;
int main()
{
    freopen("treasure.in","r",stdin);
    //freopen("treasure.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>floor[i][j]>>point[i][j];
            c[i]+=floor[i][j];
        }
    }
    cin>>start_num;
    for(int j=1;j<=n;j++)
    {
        sum = sum%mod + point[j][start_num]%mod;
        ans =0;
        q=start_num;
        point[j][q] = (point[j][q]-1)%c[j]+1;  //减去多余部分
        while (ans<point[j][q])
        {
            ans+=floor[j][start_num];  //如上
            if (ans==point[j][q]) break;
            start_num++;
            if (start_num==m) 
                start_num=0;
        }
    }
    cout<<sum%mod<<endl;
    return 0;
}