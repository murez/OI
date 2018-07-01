#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	ios::sync_with_stdio;//io advance
	int score[12505][2];
	char p;
	int w1=0,w2=0,l1=0,l2=0,co=1;
	while (scanf("%c",&p)&&p!='E'){
		if (p=='W'){w1++;w2++;}
		if (p=='L'){l1++;l2++;}
		if (((w1>=11)&&(w1-l1>1))||((l1>=11)&&(l1-w1>1))){
			cout<<w1<<":"<<l1<<endl;
			l1=0;w1=0;
		}
		if (w2>=21&&w2-l2>1||l2>=21&&l2-w2>1){
			score[co][0]=w2;score[co][1]=l2;
			l2=0;w2=0;co++;
		}
	}
	cout<<w1<<":"<<l1<<endl<<endl;
	int i=0;
	while (co-i-1){
		i++;
		cout<<score[i][0]<<":"<<score[i][1]<<endl;
	}
	cout<<w2<<":"<<l2<<endl;
	return 0;
} 
