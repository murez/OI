#include <iostream>
using namespace std;
const int mod=1e9+7;
int main(){
	long long a,b,n,ans;
	a=b=1;
	cin>>n;
	for (int i=2;i<=n;i++)
	{
		ans=(a+b)%mod;
		a=b;
		b=ans;
	}
	cout<<ans<<endl;
	return 0;
} 
