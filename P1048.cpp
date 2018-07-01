#include <iostream>
using namespace std;
//start to learn DP
int f[101][10001];
int c[101],w[101];
int max_time;
int main(){
	int n;
	cin>>max_time>>n;
	for (int i=1;i<=n;i++) cin>>c[i]>>w[i];
	for (int i=1;i<=n;i++){
		for (int v=max_time;v>=0;v--){
			if (v>=c[i])
			f[i][v]=max(f[i-1][v],f[i-1][v-c[i]]+w[i]);
			else
			f[i][v]=f[i-1][v]; 
		} 
	}
	cout<<f[n][max_time]<<endl;
	return 0;
} 
