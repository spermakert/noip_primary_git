/*************************************************************************
    > File Name: water.cpp
    > Author: spermakert
    > Mail: spermakert@163.com
    > Created Time: Fri 27 Aug 2018 14:50:54 PM CST
 ************************************************************************/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(int a,int b)
{
  return a<b;
}
int main()
{
    freopen ("water.in","r",stdin);
    freopen ("water.out","w",stdout);
    int n,m,water;
    cin>>n>>m;
    vector<int> water_pop,water_now,water_wait;
    for(int i=0;i<n;i++)
    {
        cin>>water;
        water_pop.push_back(water);
    }

    for(int i=0;i<m;i++)
    {
        water_now.push_back(water_pop[i]);
    }
    
    for(int i=0;i<n-m;i++)
    {
        water_wait.push_back(water_pop[n-m+i]);
    }
   
    int k=0,ans=0;
    while(n>0)
    {
        for(int i=0;i<m;i++)
        {
            water_now[i]--;
        }
        ans++;
        for(int i=0;i<m;i++)
        {
            if(water_now[i]==0)
            {
                water_now[i] = water_wait[k];
                k++;
                n--;
            }
        }
    }

    cout<<ans<<endl;
    return 0;
}
