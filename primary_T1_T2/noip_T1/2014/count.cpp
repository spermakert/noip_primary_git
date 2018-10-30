#include <iostream>
const int maxn=2005;
using namespace std;
int main()
{
    freopen ("count.in","r",stdin);
    int num[maxn];
    int n,tmp[1003],ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        cin>>tmp[i];

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            num[tmp[i]+tmp[j]]++;
        
    for(int i=0;i<n;i++)
        if(num[tmp[i]])
            ans++;
    cout<<ans<<endl;
    return 0;
}