#include <iostream>
using namespace std;
int pai[14];
int main(){
	for (int i=1;i<=13;i++)pai[i]=8;
	while (!cin.eof()){
		int a;
		cin>>a;
		pai[a]--;
		cout<<"  A  2  3  4  5  6  7  8  9  10  J  Q  K"<<endl;
		cout<<"  ";
		for (int i=1;i<=13;i++){
			cout<<pai[i]<<"  ";
		} 
	}	
	return 0;
} 
