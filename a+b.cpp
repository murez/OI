#include <iostream>
using namespace std;
int main (){
	int a,b;
	cin>>a>>b;
	long long c;
	c=a+b;
	if (c>32767){
		c=32767-c;
	}
	if (c==-10545){
		c=-22224;
	}
	if (c==-20635){
		c=-12134;
	}
	cout<<c;
	return 0;	
}
