#include <cstdio>
#include <algorithm>
using namespace std;
struct P{
	int code,sorce,weight;
};
int n,r,q;
P a[200002],b[200002],ans[200002];//a来存赢的，b来存输的
bool pcmp(const P& a,const P& b) {
	return (a.sorce==b.sorce)?(a.code<b.code):(a.sorce>b.sorce);//注意特殊情况的处理
}
void solve() {
	int ai=1,bi=1;
	for (int i=1;i<=n*2;i+=2) {
		if (ans[i].weight>ans[i+1].weight) {
			ans[i].sorce++;
			a[ai++]=ans[i];
			b[bi++]=ans[i+1];
		}
		else {
			ans[i+1].sorce++;
			a[ai++]=ans[i+1];
			b[bi++]=ans[i];
		}
	}
	//merge_sort
	int i=1,j=1,k=1;
	while (i<ai && j<bi) {
		if (pcmp(a[i],b[j])) {
			ans[k++]=a[i++];
		}
		else {
			ans[k++]=b[j++];
		}
	}
	while (i<ai) ans[k++]=a[i++];
	while (j<bi) ans[k++]=b[j++];
}
int main() {
	freopen("swiss.in","r",stdin);
	//freopen("swiss.out","w",stdout);
	scanf("%d%d%d",&n,&r,&q);
	for (int i=1;i<=n*2;i++) {
		scanf("%d",&ans[i].sorce);
		ans[i].code=i;
	}
	for (int i=1;i<=n*2;i++) {
		scanf("%d",&ans[i].weight);
	}
	sort(ans+1,ans+1+2*n,pcmp);
	for (int i=1;i<=r;i++) {
		solve();
	}
	printf("%d\n",ans[q].code);
	return 0;
}
