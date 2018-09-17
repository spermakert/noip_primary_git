/*************************************************************************
    > File Name: stat.cpp
    > Author: spermakert
    > Mail: spermakert@163.com
    > Created Time: Fri 26 Aug 2018 18:06:46 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
string lower(string s);

int main()
{
    freopen ("stat.in","r",stdin);
    freopen ("stat.out","w",stdout);
    string word;
    string article;
    getline(cin,word);
    getline(cin,article);
    word=lower(word);
    article=lower(article) + " ";//注意这里

    string tmp;
    int pos = 0;
    int ans = 0;
	int len = article.size();
    for(int i=0;i<len;i++)
    {
        if(article[i]==' ')
        {
            tmp = article.substr(pos,i-pos);
            pos=i+1;
            if(tmp==word) //or tmp==word
            {
                ans++;
            }
        }
    }
    if(ans==0)
        ans=-1;
    cout<<ans;
    return 0;
}
string lower(string s)
{
    for(int i=0;i<s.length();i++) //
    {
        //s[i]=tolower(s[i]);
        if(s[i]>='A'&& s[i]<='Z')
        {
            s[i]+=32;
        }
    }
    return s;
}


