#include <iostream>
#include <cstdio>
#include <queue>
#include <stack>
#define MAX_ 1001
#define MAX 1000005
using namespace std;
bool map[MAX_][MAX_];
bool vis[MAX_][MAX_];
int ans[MAX_][MAX_];
int n,m;
int walk[4][2]={1,0,-1,0,0,1,0,-1};
struct point{
	int x,y;
};
void bfs(point a){
	queue <point> q;
	stack <point> s;
	q.push(a);
	vis[a.x][a.y]=1;
	while (!q.empty()){
		point now,next;
		now=q.front();q.pop();s.push(now);
		for (register int i=0;i<4;i++){
			int xx,yy;
			xx=now.x+walk[i][0];yy=now.y+walk[i][1];
			if (vis[xx][yy]==0&&(map[xx][yy]+map[now.x][now.y]==1)&&xx<=n&&yy<=n&&xx>0&&yy>0){
				next.x=xx;next.y=yy;
				q.push(next);
				vis[next.x][next.y]=1;
			}
		}
	}
	int step=s.size();
	while (!s.empty()){
		point a;
		a=s.top();s.pop();
		ans[a.x][a.y]=step;
	}
	return;
}

int searchit(point a){
	if (vis[a.x][a.y]==0) bfs(a);
	return ans[a.x][a.y];
}

int main(){
	cin>>n>>m;
	//for (register int i=1;i<=n;i++)for(register int j=1;j<=n;j++) {char al;al=getchar();if (al=='1') map[i][j]=1;} 
	for(int i = 1; i <= n; i++){
        char str[1010];
        scanf("%s", &str);
        for(int j = 1; j <= n; j++){
            map[i][j] = str[j-1] - 48;
        }
    }
	for (register int i=1;i<=m;i++){
		point a;cin>>a.x>>a.y;
		cout<<searchit(a)<<endl;
	}
	return 0;
}
