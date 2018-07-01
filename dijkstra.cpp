#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
    int n,m,s;
    int w[10005][10005];
    int d[10005];
    cin>>n>>m>>s;
    int x,y;
    memset(w,-1,sizeof(w));
    for (int i=1;i<=m;i++)
    {
        cin>>x>>y;
        cin>>w[x][y];
    }
    int v[10005];
    memset(v,0,sizeof(v));
    memset(d,2147483647,sizeof(d));
    d[s]=0;
    for (int i=1;i<=n;i++)
    {
    	int x,m;
    	m=2147483647;
    	for (int y=1;y<=n;y++)
    	if (v[y]==0&&d[y]<=m)
    	m=d[x=y];
    	v[x]=1;
    	for (int y=1;y<=n;y++)
    	d[y]=min(d[y],d[x]+w[x][y]);
	}
	for (int i=1;i<=n;i++)
	cout<<d[i]<<" ";
	return 0;
}
