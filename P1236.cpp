#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

const char ch[7]={0,'+','-','*','/','-','/'};

int a[5],c[25][5],k[5];
bool vis[5];

void dfs(int num,int tp)
{
    if(tp==4){
        ++c[0][0];
        for(int i=1;i<=4;++i){
            c[c[0][0]][i]=k[i];
        }return;
    }for(int i=1;i<=4;++i){
        if(!vis[i]){
            vis[i]=1;
            k[tp+1]=a[i];
            dfs(i,tp+1);
            vis[i]=0;
        }
    }return;
}

int main()
{
    scanf("%d%d%d%d",&a[1],&a[2],&a[3],&a[4]);
    for(int i=1;i<=4;++i){
        vis[i]=1;
        k[1]=a[i];
        dfs(i,1);
        vis[i]=0;
    }for(int i=1;i<=c[0][0];++i){
        for(int j=1;j<=6;++j){
            for(int k=1;k<=6;++k){
                for(int l=1;l<=6;++l){
                    int a1,a2,a3;
                    if(j==1) a1=c[i][1]+c[i][2];
                    else if(j==2&&c[i][1]>c[i][2]) a1=c[i][1]-c[i][2];
                    else if(j==3) a1=c[i][1]*c[i][2];
                    else if(j==4&&c[i][1]%c[i][2]==0) a1=c[i][1]/c[i][2];
                    else if(j==5&&c[i][2]>c[i][1]) a1=c[i][2]-c[i][1];
                    else if(j==6&&c[i][2]%c[i][1]==0) a1=c[i][2]/c[i][1];
                    else continue;
                    if(k==1) a2=a1+c[i][3];
                    else if(k==2&&a1>c[i][3]) a2=a1-c[i][3];
                    else if(k==3) a2=a1*c[i][3];
                    else if(k==4&&a1%c[i][3]==0) a2=a1/c[i][3];
                    else if(k==5&&c[i][3]>a1) a2=c[i][3]-a1;
                    else if(k==6&&c[i][3]%a1==0) a2=c[i][3]/a1;
                    else continue;
                    if(l==1) a3=a2+c[i][4];
                    else if(l==2&&a2>c[i][4]) a3=a2-c[i][4];
                    else if(l==3) a3=a2*c[i][4];
                    else if(l==4&&a2%c[i][4]==0) a3=a2/c[i][4];
                    else if(l==5&&c[i][4]>a2) a3=c[i][4]-a2;
                    else if(l==6&&c[i][4]%a2==0) a3=c[i][4]/a2;
                    if(a3==24){
                        printf("%d%c%d=%d\n",max(c[i][1],c[i][2]),ch[j],min(c[i][1],c[i][2]),a1);
                        printf("%d%c%d=%d\n",max(a1,c[i][3]),ch[k],min(a1,c[i][3]),a2);
                        printf("%d%c%d=%d\n",max(a2,c[i][4]),ch[l],min(a2,c[i][4]),a3);
                        return 0;
                    }
                }
            }
        }
    }puts("No answer!");
    return 0;
}
