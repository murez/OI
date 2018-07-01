#include <iostream>
using namespace std;
int main(){
	int c;
	cin>>c;
	int a[1001],b[1001],step;
	a[1]=1;
	step=1;
	for (int _=2;_<=1000;_++)
	{
		b[_]=0;
	}
	b[1]=1;
	for (int i=2;i<=c;i++)
	{
		for (int j=1;j<=step;j++)
		{
			a[j]=a[j]*i;
			if (a[j-1]>9){
				a[j]+=a[j-1]/10;
				a[j-1]=a[j-1]%10;
			}
		}
		if (a[step]>9)
		{
			a[step+1]=a[step]/10;
			a[step]=a[step]%10;
			step++;
		}
		for (int j=1;j<=step;j++)
		{
			b[j]+=a[j];
			if (a[j-1]>9){
				a[j]++;
				a[j-1]=a[j-1]%10;
			}
		 } 
	}
	for (int i=step;i>=1;i--)
	{
		cout<<b[i];
	}
	cout<<endl;
	return 0;
} 
