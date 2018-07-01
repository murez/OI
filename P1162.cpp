#include <iostream>
#include <queue>
#include <algorithm>
#define MAX 35
using namespace std;
int n;
int map[MAX][MAX];
//bool vis[MAX][MAX]={0};
struct point{
	int x,y;
};
queue<point> q;
int walk[4][2]={1,0,-1,0,0,1,0,-1};
void bfs(point a){
	q.push(a);
	map[a.x][a.y]=2;
	while (!q.empty()){
		point now,next;
		now=q.front();q.pop();
		for (int i=0;i<4;i++){
			int xx=now.x+walk[i][0];
			int yy=now.y+walk[i][1];
			if (xx>0&&yy>0&&xx<=n&&yy<=n&&map[xx][yy]==0){
				next.x=xx;next.y=yy;
				map[xx][yy]=2;
				q.push(next);
			}
		}
	}
	return;
}
bool incyc(point a){
    if (map[a.x][a.y]==1) return 0;
	bool f1,f2,f3,f4;
	f1=f2=f3=f4=0;
	for (register int i=a.x;i>=1;i--)
	if (map[i][a.y]==1) {f1=1;break;}
	for (register int i=a.x;i<=n;i++)
	if (map[i][a.y]==1) {f2=1;break;}
	for (register int i=a.y;i>=1;i--)
	if (map[a.x][i]==1) {f3=1;break;}
	for (register int i=a.y;i<=n;i++)
	if (map[a.x][i]==1) {f4=1;break;}
	if (f1==1&&f2==1&&f3==1&&f4==1) return 1;
	return 0;
}
int main(){
	cin>>n;
	for (register int i=1;i<=n;i++)for (register int j=1;j<=n;j++)cin>>map[i][j];
	for (register int i=1;i<=n;i++)for (register int j=1;j<=n;j++){
		point k;k.x=i;k.y=j;
		if (incyc(k)){
			bfs(k);
			for (register int i=1;i<=n;i++){for (register int j=1;j<=n;j++)cout<<map[i][j]<<" ";cout<<endl;}
	return 0;
		}
	}
}
