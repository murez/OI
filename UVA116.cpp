#include <iostream>
#include <algorithm>
using namespace std;
int a[11][101],d[11][101],next[11][101];
const int INF = 0xfffff;
int temp;
int main(){
	int n,m;
	while (!cin.eof()){
		cin>>m>>n;
		int ans=INF;
		for (int i=1;i<=m;i++)
			for (int j=1;j<=n;j++)
				cin>>a[i][j];
		for (int j=n;j>0;j--){
			for (int i=1;i<=m;i++){
				if (j==n) d[i][j]=a[i][j];
				else {
					int row[3]={i,i-1,i+1};
					if (i==1) row[1]=m;
					if (i=m) row[2]=1;
					sort(row,row+3);
					d[i][j]=INF;
					for (int k=1;k<3;k++){
						int v=d[row[k]][j+1]+a[i][j];
						if (v<d[i][j]) d[i][j]=v,next[i][j]=row[k];
					}
				}
				if (j==1&&d[i][j]<ans) ans=d[i][j],temp=i;
			}
		}
		cout<<temp<<endl;
		for (int i=next[temp][1],j=1;j<=n;i=next[i][j],j++)
			cout<<i<<" ";
		cout<<endl; 
	}
	return 0;
} 
