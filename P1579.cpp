#include <iostream>
#include <cmath>
using namespace std;
bool prime(int n){
	for (int i=2;i<=sqrt(n);i++)
		if (n%i==0) return false;
	return true;
}
int main(){
	int n,x,y;
    cin>>n;
    for(x=2;;x++)
        for(y=x;n-x-y>=y;++y)
            if(prime(x) && prime(y) && prime(n-x-y))
                {cout<<x<<' '<<y<<' '<<n-x-y;return 0;}
	return 0;
}
