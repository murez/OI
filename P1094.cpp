#include <iostream>
#include <algorithm>
using namespace std;
int w[30005];
int main(){
	int maxw,n;
	cin>>maxw>>n;
	for (int i=1;i<=n;i++){
		cin>>w[i];
	}
	sort (w+1,w+n+1);
	int head ,tail;
	head =1;tail=n;
	int sum=0;
	while (head<=tail){
		if (w[head]+w[tail]<=maxw){
			sum++;
			head++;
			tail--;
		}
		else{
			tail--; 
		} 
	} 
	cout<<sum<<endl;
	return 0;
}
