#include <iostream>
#include <string>
#include <algorithm>
#include <memory.h>
#define BASE ('A'-1)
using namespace std;
string sec,key,aim;
int tab[27]={};
bool s[27],k[27];
int i,j,p,q;
int main(){
	p=0;
	cin>>sec>>key>>aim;
	memset(tab,0,sizeof(tab));
	memset(s,0,sizeof(tab));
	memset(k,0,sizeof(tab));
	for (i=0;i<sec.size();i++){
		if (!s[sec[i]-BASE]&&!k[key[i]-BASE]){
			tab[sec[i]-BASE]=key[i];
			s[sec[i]-BASE]=k[key[i]-BASE]=1;
			p++;
		}
		else if (tab[sec[i]-BASE]!=key[i]){
		cout<<"Failed"<<endl;return 0;
	}
	}
	if (p!=26){
		cout<<"Failed"<<endl;return 0;
	}
	for (int i=0;i<aim.size();i++){
		char a;
		a=tab[aim[i]-BASE];
		cout<<a;
	}
	return 0;
}
