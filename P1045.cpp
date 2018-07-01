#include <iostream>
#include <cstring>
using namespace std;
int table[501];
int main(){
	long long a;
	cin>>a;
	memset(table,sizeof(table),0);
	int tail=1;
	table[1]=1;a--;
	while (a!=0){
		int temptail=0;
		for (int i=1;i<=tail;i++){
			table[i]*=2;
		}
		if (table[tail]>10)temptail++;
		for (int i=1;i<=tail;i++){
			if (table[i]>=10){
				table[i+1]++;table[i]-=10;
			}
		}
		tail+=temptail;
	}
	table[1]--;
	cout<<tail<<endl;
	for (int i=9;i>=0;i--){
		for (int j=50;j>=1;j--)
			cout<<table[j+i*50];
		cout<<endl;
	}
	return 0;
}
	
