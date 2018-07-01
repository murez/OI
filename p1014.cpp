#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a;
	cin>>a;
	double p=(sqrt(1+8*a)-1)/2;
	int n=ceil(p);
	int r= a- n*(n-1)/2;
	cout<<r<<"/"<<n
	<<endl;
	return 0;
}
