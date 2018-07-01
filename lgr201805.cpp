#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double a[15][2];
double ds(double x1,double y1,double x2,double y2){
	return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2); 
}
int l,n;
int main(){
	cin>>n>>l;
	for (int i=1;i<=n;i++){
		cin>>a[i][0]>>a[i][1]; 
	}
	double x,y;
	for (x=0;x<=l;x+=0.0005){
		for (y=0;y<=l;y+=0.0005){
			for (int i=1;i<=n;i++){
				if (sqrt(ds(x,y,a[i][0],a[i][1])-1e-6)<(l/n)){
					continue;
				}
				if (sqrt(ds(x,y,a[i][0],a[i][1])-1e-6)>(l/n)&&i==n){
					cout<<setiosflags(ios::fixed)<<setprecision(3)<<x<<" "<<y<<endl;
					return 0;
				}
			}
		}
	}
	cout<<"GG"<<endl;
	return 0;
}
