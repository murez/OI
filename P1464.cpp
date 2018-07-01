#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int f[25][25][25]; 
int w(int a,int b,int c){
	if (a<=0||b<=0||c<=0) return 1;
	if (f[a][b][c]!=0) return f[a][b][c];
	if (a>20||b>20||c>20){f[20][20][20]=w(20,20,20);return f[20][20][20];}
	if (a<b&&b<c) {f[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c); return f[a][b][c];}
	else {f[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1); return f[a][b][c];
	}
}
int main(){
	int x,y,z;
	memset(f,sizeof(f),0);
	while (cin>>x>>y>>z&&(x!=-1||y!=-1||z!=-1)){
		cout<<"w("<<x<<", "<<y<<", "<<z<<")"<<" = ";
		if (x<=0||y<=0||z<=0) x=y=z=-1;
		if (x>20||y>20||z>20) x=y=z=21;
		cout<<w(x,y,z)<<endl;
	}
	return 0;
} 
