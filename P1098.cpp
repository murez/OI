#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool cmp(char a,char b)
{
    if(a<b&&(((a>='0'&&a<='9')&&(b>='0'&&b<='9'))||((a>='A'&&a<='z')&&(b>='A'&&b<='z'))))   //判断是否都是字母/数字.
        return 1;
    return 0;
}
int main(){
	int p1,p2,p3;
	cin>>p1>>p2>>p3;
	string str;
	cin>>p1>>p2>>p3;
	cin>>str;
	int po=0;
	while (1){
		po=str.find('-',po);
		if (po==string::npos) break;
		char b=str[po-1],e=str[po+1];
		if (cmp(b,e)==1){
			int bit=((e-b-1)*p2)+1;
			string instr;
			instr=b;
			for (int i=b+1;i<e;i++)
				for (int j=(i-b-1)*p2+1;j<=(i-b)*p2;j++) instr+=i;
			instr+=e;
			if (p1==1);
			else if(p1==2){
				for (int i=1;i<bit-1;i++){
					if (instr[i]>'a'&&instr[i]<'z') instr[i]-=32;
				}}
			else if(p1==3){
				instr=b;
				for (int i=b+1;i<e;i++)
				for (int j=(i-b-1)*p2+1;j<=(i-b)*p2;j++) instr+='*';
				instr+=e;
			} 
			string p3str=instr;
            if(p3==2)
                for(int i=1;i<=bit-1;i++)
                    instr[bit-i]=p3str[i];
            str.replace(po-1,3,instr);
			}
			else continue;
		}
		cout<<str<<endl;
	return 0;
}
