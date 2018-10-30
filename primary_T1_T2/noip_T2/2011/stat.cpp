#include <iostream>
#include <cstring>
using namespace std;
int n,k,m,ans,ans1=1,pos;
string word,art;
int main()
{
    freopen("stat.in","r",stdin);
    //freopen("stat.out","w",stdout);
    getline(cin,word);
    word="#"+word;
    word+='#';
    for(int i=0;i<word.size();i++)
    {
        word[i]=toupper(word[i]);//全部变成大写
    }
    getline(cin,art);
    art="#"+art;//边界
    art+='#';
    int t=art.size();
    for(int i=0;i<t;i++)
    {
       art[i]=toupper(art[i]);
       if(art[i]==' ')
        art[i]='#';//空格传换成'#' 这里必须写 很巧妙
       //样例中 to变成#to# 而otto变成#otto# 这样就不匹配了
    }
    pos=ans=art.find(word); //先找到第一个
    while(pos!=-1)
    {
        pos=art.find(word,pos+1);
        if(pos!=-1) ans1++;
    } 
    if(ans!=-1)
		cout<<ans1<<" ";//输出
    cout<<ans;
    return 0;
}
