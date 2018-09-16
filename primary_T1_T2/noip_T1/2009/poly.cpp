#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
    freopen("poly.in","r",stdin);
    freopen("poly.out","w",stdout);
    //100 -1 1 -3 0 10
    //100x^5-x^4+x^3-3x^2+10
    //-50 0 0 1
    //-50x^3+1
    int n;
    int A[101];
    string str;
    scanf("%d",&n);
    for(int i=0;i<n+1;i++)
    {
        scanf("%d",&A[i]);
    }

    string tmp="";
    for(int j=0,k=n;j<n+1;j++,k--)
    {
        if(j==0&&A[j]>0)
        {
            tmp=to_string(A[j])+"X^"+to_string(k);
        }
        if(j==0&&A[j]<0)
        {
            tmp=to_string(A[j])+"X^"+to_string(k);
        }
        if(j==0&&A[j]==1)
        {
            tmp="X^"+to_string(k);
        }
        if(j==0&&A[j]==-1)
        {
            tmp="-X^"+to_string(k);
        }
        if(A[j]==0)
            tmp="";
        if(A[j]==1&&j>0&&j!=n-1)
            tmp="+X^" + to_string(k);;
        if(A[j]>1&&j>0&&j!=n-1)
            tmp="+"+ to_string(A[j]) + "X^" + to_string(k);
        if(A[j]<-1&&j>0&&j!=n-1)
            tmp=to_string(A[j])+"X^"+to_string(k);
        if(A[j]==-1&&j>0&&j!=n-1)
            tmp="-X^"+to_string(k);
        if(j==n&&A[j]>0)
            tmp="+"+to_string(A[j]);
        if(j==n&&A[j]==0)
            tmp="";
        if(j==n&&A[j]<0)
            tmp=to_string(A[j]);
        if(k==1&&j==n-1&&A[j]>0)
        {
            if(A[j]==1)
                tmp="+X";
            else
                tmp="+"+to_string(A[j])+"X";
        }
        if(k==1&&j==n-1&&A[j]<0)
        {
            if(A[j]==-1)
                tmp="-X";
            else
                tmp=to_string(A[j])+"X";
        }
        str = str + tmp;
    }
    cout<<str<<endl;
    return 0;
}
