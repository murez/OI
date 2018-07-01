#include <iostream>
#include <cstring>
using namespace std;
int n,a,b;
int map[201][201];
int temp;
int main (){
	cin>>n>>a>>b;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++){
			if (i==j) map[i][j]=0;
			else map[i][j]=400;
		} 
	for (int i=1;i<=n;i++){
		cin>>temp;
		if(i+temp<=n) map[i][i+temp]=1;
		if(i-temp>0) map[i][i-temp]=1;
		map[i][i]=0;
	}
	for(register int k=1;k<=n;++k)
        for(register int i=1;i<=n;++i)
            for(register int j=1;j<=n;++j)
                if(i!=j)map[i][j]=min(map[i][j],map[i][k]+map[k][j]);
	if (map[a][b]!=400)cout<<map[a][b]<<endl;
	else cout<<-1<<endl;
	return 0;
} 
