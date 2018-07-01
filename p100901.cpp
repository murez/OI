#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;
int a[1000001]={0},b,c=0,d=0,e[1000001]={0},f,i,j,k,jk;//intÔÚÍâÃæ
int main()
{
     scanf("%d",&b);
    for (int k=1;k<=b;k++)
    {
        memset(a,0,sizeof(a));
        a[0]=1;
        a[1]=1;
        e[0]=1;
         for(int i=1;i<=k;i++)
        {
            c=0;
            for (int j=1;j<=a[0];j++)
            {
                 a[j]=a[j]*i+c;
                c=a[j]/10;
                a[j]=a[j]%10;
                jk=j;
            }
            a[jk+1]=c;
            while (c)
            {
            a[0]++;
            a[a[0]]=c%10;
            c=c/10;
            }
        }
        d=0;
        f=0;
        for (int i=1;i<=e[0]||i<=a[0];i++)
        {
             e[i]=a[i]+e[i];
            d=e[i]/10;
            f++;
            e[i]=e[i]%10;
            e[i+1]+=d;
        }
        e[0]=f;
    }
    for (int i=e[0];i>0;i--)
    printf("%d",e[i]);
    printf("\n");
    return 0;
}
