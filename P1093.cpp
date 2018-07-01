#include <iostream>
#include <algorithm> 
using namespace std;
struct score{
	int CH,MT,EG,sum,id;
}stu[100005];
bool cmp(score a,score b){
	if (a.sum>b.sum) return 1; 
		else
			if (a.sum==b.sum)
				if (a.CH>b.CH) return 1; 
			else
				if(a.CH==b.CH)
					if (a.id<b.id) return 1;
	return 0;
}
int main (){
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>stu[i].CH>>stu[i].MT>>stu[i].EG;
		stu[i].sum=stu[i].CH+stu[i].EG+stu[i].MT;
		stu[i].id=i;
	}
	sort (stu+1,stu+n+1,cmp);
	for (int i=1;i<=5;i++){
		cout<<stu[i].id<<" "<<stu[i].sum;
	}
	return 0;
} 
