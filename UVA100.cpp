#include <iostream>
using namespace std;
int todo(int n,int step){
	if (n==1) return step;
	n=n&1? n*3+1 : n/2;
	return todo(n,step+1);
}
int main(){
	while (!cin.eof()){
		int a,b,maxa;
		cin>>a>>b;
		maxa=0;
		for (int i=a;i<=b;i++){
			maxa=max(maxa,todo(i,1));
		}
		cout<<a<<" "<<b<<" "<<maxa<<endl; 
	}
	return 0;
}
