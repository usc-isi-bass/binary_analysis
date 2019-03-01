#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{int n,m,a[301],k,i,j,num;
for(int p=0;p<100;p++)

{cin>>n;
cin>>m;
if(n!=0)
{for(i=1;i<=n;i++)
{a[i]=1;}
j=0;
k=0;
for(i=1;i<=n;i++)
{
  if(a[i]==1)
  {
    j=j+a[i];
    if(j==m)
       {
		 j=0;
         a[i]=0;
         k++;
	   }
    if(k==n)
     {
		 num=i;break;
	}
  }
  if(i==n)
  i=0;
}
cout<<num<<endl;}}
return 0;
}
