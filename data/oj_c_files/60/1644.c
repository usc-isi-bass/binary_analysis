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
	int a1,a2,a3,k,i,n,m;
	a1=2;
	a3=0;
	scanf("%d",&m);
	for(n=2;n<=m;n++)
	{	k=sqrt(n);
		for(i=2;i<=k;i++)
		if(n%i==0) break;
		if(i>k) 
		{
			a2=a1,a1=n;
		if((a1-a2)==2)
		{
			a3=a3+1;
	        printf("%d %d\n",a2,a1);
		}
		}
	}
	if(a3==0) printf("empty");
} 