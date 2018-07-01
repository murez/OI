#include <iostream>
#define MAX 1000005
using namespace std;
int isprime[MAX];
int n,m,l,r;
void inprime(){
	for (int i=2;i<m;i++) isprime[i]=1;isprime[1]=0;
	for (int i=2;i<=m;i++){
		if(isprime[i]){
			for (int j=2;i*j<=m;j++) isprime[i*j]=0; 
		}
		isprime[i]+=isprime[i-1];
	}
}
int main(){
	cin>>n>>m;
	inprime();
	for (int i=1;i<=n;i++){
		cin>>l>>r;
		if (r>m||l<=0)cout<<"Crossing the line"<<endl;
		else
			cout<<isprime[r]-isprime[l]+(isprime[l]>isprime[l-1]?1:0)<<endl;
	}
	return 0;
} 
