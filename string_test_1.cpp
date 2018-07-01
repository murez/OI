#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
int main(){
	string s1("aaaaaa");
	transform(s1.begin(),s1.end(),s1.begin(),::toupper);
	cout<<s1<<endl;
	return 0;
}
