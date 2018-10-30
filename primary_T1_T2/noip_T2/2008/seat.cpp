/*************************************************************************
    > File Name: seat.cpp
    > Author: spermakert
    > Mail: spermakert@163.com
    > Created Time: Fri 28 Aug 2018 17:00:05 PM CST
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;
struct side{
    int pos;
    int linenum;
}row[1005],col[1005];
bool cmp(side a,side b)
{
	return a.linenum > b.linenum;
}
bool cmp2(side a,side b)
{
	return a.pos < b.pos;
}
int main()
{
    freopen ("seat.in","r",stdin);
    //freopen ("seat.out","w",stdout);
	int m,n,k,l,d;
	cin>>m>>n>>k>>l>>d;
	for(int i=0;i<m;i++)
	{
		row[i].pos = i+1;
		row[i].linenum =0;
	}
	for(int i=0;i<n;i++)
	{
		col[i].pos = i+1;
		col[i].linenum = 0;
	}

	int x1,y1,x2,y2;
	for(int i=0;i<d;i++)
	{
		cin>>x1>>y1>>x2>>y2;
		if(x1==x2)
		{
			col[min(y1,y2)-1].linenum++;
		}
		if(y1==y2)
		{
			row[min(x1,x2)-1].linenum++;
		}
	}

	sort(row,row+m,cmp);
	sort(col,col+n,cmp);
	sort(row,row+k,cmp2);
	sort(col,col+l,cmp2);

	for(int i=0;i<k;i++)
	{
		cout<<row[i].pos<<" ";
	}

	cout<<endl;

	for(int i=0;i<l;i++)
	{
		cout<<col[i].pos<<" ";
	}

	cout<<endl;

    return 0;
}
