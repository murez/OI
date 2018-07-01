#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int q,n,w1[1000001],w2[1000001],w3[1000001],ww1,ww2,ww3,ans,fans;
	cin>>q>>n;
	ans=ww1=ww2=ww3=w1[0]=w2[0]=w3[0]=0;
	for (int i=1;i<=n;i++){
		int c;cin>>c;
		if (c==1) {w1[0]++;cin>>w1[w1[0]];}
		if (c==2) {w2[0]++;cin>>w2[w2[0]];}
		if (c==3) {w3[0]++;cin>>w3[w3[0]];}
	}
	sort (w1+1,w1+w1[0]+1,cmp);
	sort (w2+1,w2+w2[0]+1,cmp);
	sort (w3+1,w3+w3[0]+1,cmp);
	if (w3[0]==0){
		for (int i=1;i<=q/2;i++) ans+=w2[i]; ww2=q/2;
		if (q%2==1) {ans+=w1[1];ww1++;}
		for (int i=ww1+1;i<=q;i+=2){
			if (w1[i]+w1[i+1]>w2[q/2+1-i-ww1])
				ans+=w1[i]+w1[i+1]-w2[q/2+1-i-ww1];
			else break;
		}
		cout<<ans<<endl;
		return 0;
	}
	for (int i=1;i<=q/3;i++) ans+=w3[i]; ww3=min(q/3,w3[0]);
	if (q%3==2) {ww2++;ans+=w2[ww2];}
	if (q%3==1) {ww1++;ans+=w1[ww1];}
	for (int i=1;i<=ww3;i++){
		int ww11=0;
		int ww22=0;
		int v=i*3;
		int www1=0;
		int temp3=0;
		int temp2=0;
		for (int _i=1;_i<=i;_i++) temp3+=w3[ww3+1-_i];
		for (int j=ww2+1;j<=v/2+ww2+1;j++) temp2+=w2[j];
		ww22=v/2;
		if (v%2==1) {www1++; temp2+=w1[ww1+www1];}
		for (int j=ww1+1+www1;j<=v+ww1+1+www1;j+=2){
			if (w1[j]+w1[j+1]>w2[ww2+ww22]){ww11+=2;temp2+=w1[j]+w1[j+1]-w2[ww2+ww22];ww22--;}
			else break;
			}
		if (temp3<temp2){
			fans=ans-temp3+temp2;
		}
		else break;
	}
	cout<<fans<<endl;
	return 0;
}
