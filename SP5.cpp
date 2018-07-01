#include <iostream>
using namespace std;
int reverse( int num ){
    int result = num%10;  
    for (; num/=10; )  
    {  
        result = result*10 + num%10;  
    }  
    return result;    
} 
int main(){
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		int m;
		cin>>m; 
		while (1){
			m++;
			if (reverse(m)==m){
				cout<<m<<endl;
				break;
			} 
		}
	}
	return 0;
}
