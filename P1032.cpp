#include <iostream>
#include <algorithm>
#include <queue>
#include <set>
#include <string>
using namespace std;
int _=1;
struct node{
	string s;
	int step;
	node (string s,int step):s(s),step(step){} 
};
set <string> repeat;
queue <node> q;
string cur,aim;
struct tran{
	string F,T;
}trans[10];
bool check(string now){
	if (now==aim) return 1;
	return 0;
} 
void bfs(){
	q.push(node(cur,0));
	while (!q.empty()){
		node now=q.front();
		q.pop();
		if (now.step>10) {cout<<"NO ANSWER!"<<endl;return;}
		for (int i=1;i<=_;i++){
			if (now.s.find(trans[i].F)!=-1){
				for (int j=now.s.find(trans[i].F);j<=now.s.length();j=now.s.find(trans[i].F,j+1)){
					string t=now.s;
					t.replace(j,trans[i].F.length(),trans[i].T);
					if (check(t)) {cout<<now.step+1<<endl;return;}
					if (!repeat.count(t)){
						repeat.insert(t);
						q.push(node(t,now.step+1));
					}
				}
			}
		}
	}
	cout<<"NO ANSWER!"<<endl;return;
}

int main(){
	cin>>cur>>aim;
	while(!cin.eof()){
		cin>>trans[_].F>>trans[_].T;
		_++;
	}
	bfs();
	return 0;
} 
