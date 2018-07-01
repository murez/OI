#include <iostream>
#include <string>
#include <algorithm>
#include <cctype> 
using namespace std;
int main(){
	string to_find;
	cin>>to_find;
	transform(to_find.begin(),to_find.end(),to_find.begin(),::tolower);
	string a;
	int i,j,flag;
	i=0;j=0;flag=0;
	while (cin>>a){
		transform(a.begin(),a.end(),a.begin(),::tolower);
		if (flag==0) j++;
		if (a==to_find){
			i++;
			flag=1;
		}
	}
	if (i==0)cout<<-1<<endl;
	else cout<<i<<" "<<j-1<<endl;
	return 0;
}

