#include <iostream>
#include <cstring>
using namespace std;
int f[30005];
int c[26],w[26];
int main(){
	int v,n;
	cin>>v>>n;
	for (int i=1;i<=n;i++){
		cin>>c[i]>>w[i];
		w[i]*=c[i];
	}
	memset(f,sizeof(f),0);
	for (int i=1;i<=n;i++)
		for (int j=v;j>=c[i];j--)
			f[j]=max(f[j],f[j-c[i]]+w[i]);
		cout<<f[v]<<endl;
	return 0;
}
