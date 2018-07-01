#include <iostream>
using namespace std;
long long a[100];
long long ans,n;
int main(){
	cin>>n;
	a[1]=1;
	ans=1;
	for (int i=2;i<=n;i++)
	{
		a[i]=a[i-1]*i;
		ans+=a[i];
	}
	cout<<ans<<endl;
	return 0;
} 
