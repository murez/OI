#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
string str;
bool judgement(){
	bool flag=0;
	for(int i = 0;i < str.length() ;i++){
		if(isdigit(str[i])) flag = 1;
            if(flag&&str[i] == 'C')
			return 1;
	}
	return 0;
}
void EX2RC(){
	int len=str.length();
	int c,r;
	c=r=0;
	for (int i=0;i<len;i++){
		if(!isdigit(str[i])) 
                c = c * 26 + str[i] - 'A' + 1;
            else r = r * 10 + str[i] - '0';
	}
	cout<<'R'<<r<<'C'<<c<<endl; 
}
void RC2EX(){
	int len=str.length();
	int R = str.find("R"),C = str.find("C");
	int r,c;
	r=c=0;
	for (int i=R+1;i<C;i++) r = r * 10 + str[i] - '0';
	for(int i = C + 1;i < len;i++) c = c * 10 + str[i] - '0';
	char alp[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string ans;
	while (c>0){
		int temp=c%26;
		if (temp==0) temp=26,c-=26;
		ans+=alp[temp];
		c/=26;
	}
	 reverse(ans.begin(),ans.end());
	 cout<<ans<<r<<endl;
}
int main(){
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>str;
		if (judgement()) RC2EX();
		else EX2RC();
	}
	return 0;
} 
