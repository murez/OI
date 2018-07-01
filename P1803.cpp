#include <iostream>
#include <algorithm>
using namespace std;
struct pair_{
	int start,end;
}map[1000005];
bool cmp(pair_ x,pair_ y){
	return x.end<y.end;
}

int main(){
	int a;
	cin>>a;
	for (int i=1;i<=a;i++){
		cin>>map[i].start;
		cin>>map[i].end;
	}
	sort(map+1,map+a+1,cmp);
	int mi=map[1].end;
	int sum=1;
    int j=1;
    while(j<=a)
    {
        j++;
        if(map[j].start>=mi) {
        sum++;
        mi=map[j].end;}
    }
    cout<<sum<<endl;
	return 0;
}
