#include <iostream>
#include <cstdio>
using namespace std;
int fa[10002];
int findfather(int x){
	while(x!=fa[x]) x=fa[x]=fa[fa[x]];
	return x;
}
int main (){
	int n,m;
	char ans;
	cin>>n>>m;
	for(int i=1;i<=n;++i) fa[i]=i;
	for (int _=1;_<=m;_++)
	{
		int a,b,z;
		cin>>z>>a>>b;
		int x,y;
		x=findfather(a);
		y=findfather(b);
		if(z==1) fa[x]=findfather(y);
    	if(z==2){
			if(x==y) puts("Y");
			else puts("N");
        } 
	}
	return 0;
}
