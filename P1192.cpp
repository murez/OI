#include <iostream>
#define MOD 100003
using namespace std;
int f[100003];
int main(){
	int a,b;
	cin>>a>>b;
	f[0]=f[1]=1;
	for (int i=2;i<=a;i++){
		if (i<=b) f[i]=f[i-1]*2%MOD;
		else {
			f[i]=f[i-1]*2-f[i-b-1];
			f[i]%=MOD;
		} 
	}
	cout<<f[a]%MOD<<endl;
	return 0;
} 
