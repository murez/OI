#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int c[3403],w[3403];
    long long f[12881];
    for(int i=1;i<=m;i++) f[i]=0;//init is principle 
    for(int i=1;i<=n;i++) cin>>c[i]>>w[i];
    for(int i=1;i<=n;i++)
        for (int v=m;v>=c[i];v--)
            f[v]=max(f[v],f[v-c[i]]+w[i]);
    cout<<f[m]<<endl;
    return 0;
}
