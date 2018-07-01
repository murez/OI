#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int m2d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main (){
	int a;
	int fry,frm,frd,frh,frs,toy,tom,tod,toh,tos;
	int n[5001];
	cin>>a;
	for (int i=1;i<=a;i++)
	{
		cin>>n[i];
	}
	scanf("%d-%d-%d-%d:%d",&fry,&frm,&frd,&frh,&frs);
    scanf("%d-%d-%d-%d:%d",&toy,&tom,&tod,&toh,&tos);
    
	cout<<fry;
 	return 0;
}
