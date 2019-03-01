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
{
int n;
cin>>n;
int i=0,j=0;;
int a[100]={0};
a[1]=1;
for(i=1;i<=n;i++)
{
	for(j=1;j<100;j++)
		a[j]=a[j]*2;
	for(j=1;j<100;j++)
		if(a[j]>=10)
		{
			a[j+1]=a[j+1]+a[j]/10;
			a[j]=a[j]%10;
		}
}
for(i=99;i>1;i--)
if(a[i]!=0)break;
for(;i>=1;i--)
cout<<a[i];
cout<<endl;
return 0;
}