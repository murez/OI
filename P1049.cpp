#include <iostream>
#include <cstring>
using namespace std;
int f[20005];
int c[35];
int main(){
	int v,n;
	cin>>v>>n;
	for (int i=1;i<=n;i++){
		cin>>c[i];
	}
	memset(f,sizeof(f),0);
	for (int i=1;i<=n;i++)
		for (int j=v;j>=c[i];j--)
			f[j]=max(f[j],f[j-c[i]]+c[i]);
		cout<<v-f[v]<<endl;
	return 0;
}
