#include <iostream>
#include <algorithm>
using namespace std;
struct pp{
	int force,height; 
}apple[5005];
bool cmp(pp a,pp b){
	return a.force < b.force;
}
int n,a,b,s; 
int main (){
	cin>>n>>s>>a>>b;
	for (int i=1;i<=n;i++){
		cin>>apple[i].height>>apple[i].force;
	}
	sort(apple+1,apple+n,cmp);
	int h=a+b;
	b=0;
	for(a=1;a<=n;a++){
        if(s-apple[a].force<0)break;
        if(apple[a].height<=h){s-=apple[a].force;b++;}else continue;//如果高度不够则跳过，对下一个进行判定
    }
	cout<<b<<endl;
	return 0;
} 
