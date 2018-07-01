#include<iostream>
using namespace std;
int main()
{
  int n,ans;
  cin>>n;
  if(n<0) {cout<<"-";n=-n;}
  ans=0;
  while(n!=0)
  {
    int k=n%10;
    ans*=10;ans+=k;n/=10;
  }
  cout<<ans<<endl;
  return 0;
}
