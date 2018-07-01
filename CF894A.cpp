#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string a;
	cin>>a;
	long long ans;
	ans=0;
	for(int i=0;i<=a.length();i++){
		if (a[i]=='Q')
			for (int j=i;j<=a.length();j++){
				if (a[j]=='A')
					for (int k=j;j<=a.length();k++)
						if (a[k]=='Q')
							ans++;
			}
	}
	cout<<ans<<endl;
	return 0;
}
