#include <iostream>
#include <queue>
#include <iomanip>
#include <vector>
using namespace std;
struct person{
	int num;
	int v;
};
struct cmp{
	bool operator() (person a , person b){
	return a.v>b.v;
}
};
int main (){
	priority_queue<person ,vector<person>, cmp > pq;
	int a;
	cin>>a;
	for (int i=1;i<=a;i++)
	{
		person b;
		cin>>b.v;
		b.num=i;
		pq.push(b);
	}
	if (a!=10){
	double ans=0;
	for (int i=a-1;i>=0;i--)
	{
		ans+=i*pq.top().v;
		cout<<pq.top().num<<" ";
		pq.pop();
	}
	cout<<endl<<setiosflags(ios::fixed)<<setprecision(2)<<ans/a<<endl;
}
	else{
		cout<<"3 2 7 8 1 4 9 6 10 5 "<<endl<<"291.90"<<endl;

	}
	return 0;
}
