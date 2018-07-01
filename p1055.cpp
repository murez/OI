#include <cstdio>
using namespace std;
int main(void){
  char a[14], mod[12]="0123456789X";
  gets(a);
  int i,j=-1,sum=0;
  for(i = 0;i<12;i++) {
        if(a[i] =='-') {
        	j++; 
			continue;
		}
    sum +=(a[i]-'0')*(i-j);
  }
  if(mod[sum%11] == a[12]) printf("Right");
  else {
      a[12] = mod[sum%11];
      puts(a);
  }
  return 0;
}
