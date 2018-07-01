#include<cstdio>
#include<algorithm>
const int NMAX=5001; 
const int MMAX=200001;
using namespace std; 
struct edge{
    int x,y,t;
}map[MMAX];
int father[NMAX],total,ans; 
bool cmp(edge p,edge q){
    return p.t<q.t;
}
int ask(int x){
         if (father[x]!=x) father[x]=ask(father[x]); 
    return father[x];
}
void combine(int r,int s) 
{
    int _=ask(r);
    int __=ask(s);
if (_!=__)  father[_]=__;
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m); 
    for (int i=1;i<=m;i++) scanf("%d%d%d",&map[i].x,&map[i].y,&map[i].t);
    sort(map+1,map+m+1,cmp);
    for (int i=1;i<=n;i++) father[i]=i;
    for (int i=1;i<=m;i++){
        if (ask(map[i].x)!=ask(map[i].y)){
            ans=max(ans,map[i].t); 
            combine(map[i].x,map[i].y); 
            total++;
        }
    }
    if (total<n-1) printf("-1");
    else printf("%d",ans); 
return 0;
}
