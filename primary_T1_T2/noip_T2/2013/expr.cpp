/*************************************************************************
    > File Name: mine.cpp
    > Author: spermakert
    > Mail: spermakert@163.com
    > Created Time: Fri 26 Aug 2018 10:12:26 PM CST
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;



int main()
{

    freopen ("expr.in","r",stdin);
    //freopen ("librarian.out","w",stdout);
    string str;
    cin>>str;
    int strlen = str.size();//str.length();
    int i=0,num_tmp=0,j=0,k=0,cnum_tmp,ans=0;
    while(i<strlen)
    {
        j=i;
        cnum_tmp=0;
        num_tmp=0;
        while(j<strlen && str[j]>='0' && str[j]<='9')
        {
            num_tmp=num_tmp*10+(str[j]-'0');
            j++;
        }
        cnum_tmp = num_tmp;
        while(j<strlen && str[j]=='*')
        {
            k=j+1;
            num_tmp=0;
            while(k<strlen && str[k]>='0' && str[k]<='9')
            {
                num_tmp= num_tmp=num_tmp*10+(str[k]-'0');
                k++;
            }
            cnum_tmp = cnum_tmp * num_tmp;
            j=k;
        }
        i=j+1;
        ans = ans +cnum_tmp;
    }

    cout<<ans%10000;
    return 0;
}


