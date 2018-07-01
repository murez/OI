#include  <iostream>
#include  <cmath>
using namespace std;
int main(){
	double a[1000][2];
	a[1][0]=1;
	a[1][1]=1;
	for (int i=2;;i++)
	{
		a[i][0]=i*i;
		a[i][1]=(a[i-1][1]*(i-1)+a[i][0])/i;
		if (int(sqrt(a[i][1]))==sqrt(a[i][1]))
		{
			cout<<a[i][1]<<" "<<i<<endl;
			break;
		}
	}
	return 0;
} 
