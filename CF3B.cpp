#include <iostream>
#include <algorithm>
#include <cmath>
const int MAXN=1e5+1;
using namespace std;
struct lorry{
	int id;
	int w;
}D1[MAXN],D2[MAXN];
bool cmp(lorry a,lorry b){
	return a.w>b.w;
}
int n,v;
int main(){
	cin>>n>>v;
	int d1l,d2l;d1l=d2l=0;
	for (int i=1;i<=n;i++){
		int c;cin>>c;
		if (c==1) {d1l++;cin>>D1[d1l].w;D1[d1l].id=i;}
		if (c==2) {d2l++;cin>>D2[d2l].w;D2[d2l].id=i;}
		}
	sort (D2+1,D2+1+d2l,cmp);
	sort (D1+1,D1+1+d1l,cmp);
	int maxw=0;int d1step=0;
	for (int i=1;i<=v/2;i++){
		maxw+=D2[i].w;
	}
	int d2step=v/2;
	if (v%2==1) maxw+=D1[1].w,d1step=2;
	for (int i=d1step;i<=d1l;i++){
		if (D1[i].w+D1[i+1].w>D2[d2step].w){
			maxw-=D2[d2step].w;
			maxw+=D1[i].w+D1[i+1].w;
			i++;
			d1step+=2;
			d2step--;
		}
	}
	cout<<maxw<<endl;
	for (int i=1;i<=d2step;i++) cout<<D2[i].id<<" ";
	for (int i=1;i<=d1step;i++) cout<<D1[i].id<<" ";
	return 0;
} 
