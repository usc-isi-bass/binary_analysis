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


void main()
{
	int m,i,t,j,k,p,a;
	scanf("%d",&m);
	for(i=3;i<=m/2;i++)
	{
		a=1;
		t=i;p=m-i;
		for(j=2;j<=t/2;j++)
		{
			if(t%j==0)
			{a=0;
			break;}
		}
		for(k=2;k<=p/2;k++)
		{
			if(p%k==0)
			{a=0;
			break;}
		}
		if(a)
		printf("%d %d\n",t,p);
	}
	
}