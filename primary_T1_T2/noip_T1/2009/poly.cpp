#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    freopen("poly.in","r",stdin);
    //freopen("poly.out","w",stdout);
    int n,i,j,k;
    char c;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        if(k==0)
            continue;
        c=(k>0)?'+':'-';
        if(i>1 || (i==1 && k<0))
            cout<<c;
        k=abs(k);
        if(k!=1)
            cout<<k;
        if(i<n)
            cout<<"x^"<<n-i+1;
        else 
            cout<<"x";  
    } 
    cin>>k;
    if(k!=0)
        cout<<"+"<<k;
    cout<<endl;   
    return 0;
}