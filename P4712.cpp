#include <iostream>
using namespace std;
int a[1000001],n,last,j,b;
long long s;
int main(){
	cin>>n>>s;
	last=0;
	for (int i=1;i<=n;i++){
		cin>>a[i]>>b;
		for(j=last+1;j<=b;++j)s+=a[j];
		last=j-1;
		s-=a[i]*5;
		if (s<=0) return cout<<-1,0; 
	}
	for (int i=last+1;i<=n;++i)s+=a[i];
	cout<<s/5<<endl;
	return 0;
}
