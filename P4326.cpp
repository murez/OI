#include <iostream>
#include <iomanip>
using namespace std;
const double pi=3.14159265358979323;
int main (){
	int n;
	cin>>n;
	cout<<setiosflags(ios::fixed)<<setprecision(6)<<n*n*pi<<endl<<setiosflags(ios::fixed)<<setprecision(6)<<n*n*2;
	return 0;
}
