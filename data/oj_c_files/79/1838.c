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
	int a[300],b,c=0,d,e,f,g,h,i,j,p=1,m,k,l,n,s=0;
	for(;;)
	{scanf("%d %d",&n,&m);
	c=0;
	p=1;
    s=0;
	if(m==0 && n==0) break;
	for(i=0;i<=n-1;i++)	{a[i]=i+1;}
	for(i=n;i<=299;i++)	{a[i]=0;}
	for(;;)
	{	if((p+m)%n==1 || (p+m)%n==0 ) {p=(p+m)%n+n-1;}
	    else {p=(p+m)%n-1;}
	   	if(p==0) break;
		for(j=p-1;j<=n-1;j++)
		{a[j]=a[j+1];}
		n=n-1;
	}
	printf("%d\n",a[0]);
	}
	return 0;
}