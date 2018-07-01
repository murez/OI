#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int i=10;
	int flag=0;
	while (flag==0)
	{
		int n=i*i;
		int p=-i;
		for (int j=1;j<=i;j++)
		{
			if (n%j==0)
			p+=j+n/j;
			cout<<j<<" "<<n/j<<" "; 
		}
		if (sqrt(p)==int(sqrt(p)))
		{
			cout<<i<<" "<<p<<endl;
			flag=1;
		}
		i++;
	}
	return 0;
} 
