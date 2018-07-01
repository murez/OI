#include <iostream>
#include <cmath>
using namespace std;
double howtime(double s){
	return log(1-(0.02*s/7))/log(0.98);
}
int main(){
	double a,b;
	cin>>a>>b;
	if (a>=357){
		cout<<"n"<<endl;
	}
	else{
		double time1=howtime(a-b);
		double time2=howtime(a+b);
		if (time2-time1<=1){
			cout<<"n"<<endl;
		}
		else cout<<"y"<<endl; 
	}
	return 0;
} 
