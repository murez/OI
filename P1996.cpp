#include <iostream>
#include <vector>
using namespace std;
vector <int> num;
int main(){
	int n,m;cin>>n>>m;
	for (int i=1;i<=n;i++) num.push_back(i);
	if (n+m==0) return 0;
	n=0;
	while (num.size()!=1){
		n+=m-1;
		n%=num.size();
		cout<<num[n]<<" ";
		num.erase(num.begin()+n);
	}
	cout<<num[0];
	return 0;
}
