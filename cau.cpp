#include <iostream>
#include <iomanip>
using namespace std;
int n[16];
int main(){
	double sum=0;  
	for (int i=1;i<=2;i++){
		double temp;
		cin>>temp;
		temp/=3;
		sum+=temp;
	}
	for (int i=3;i<=14;i++){
		double temp;
		cin>>temp;
		temp/=36;
		sum+=temp;
	}
	cout<<<<sum<<endl;
	return 0;
}
