#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct person{
	int id,w;
}p[20005];
int n,k,E[15];
bool cmp(person a,person b){
	a.w<b.w;
}
int main(){
	cin>>n>>k;
	for (int i=1;i<=10;i++) cin>>E[i];
	for (int i=1;i<=n;i++){
		scanf("%d",&p[i].w);
		p[i].id=i;
	}
	sort(p+1,p+n+1,cmp);
	for (int i=1;i<=n;i++){
		p[i].w+=E[i%10+1]; 
	}
	sort(p+1,p+n+2,cmp);
	for (int i=1;i<=k;i++)cout<<p[i].id<<" ";
	return 0;
}
