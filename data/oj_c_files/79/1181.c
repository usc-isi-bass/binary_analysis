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
	int m,n;
	int *p;
	int i,j,k;
	for(;;)
	{
		scanf("%d%d",&n,&m);
		if(m==0)break;
		else if(n==1) printf("1\n");
	
		else
		{p=(int*)malloc(sizeof(int)*(n));
	for(i=0;i<n;i++) 
		p[i]=0;
	k=n;
	j=1;
	for(i=0;i<n;i=(i+1)%n)
	{
		
		if(p[i])continue;
		
		if(j++==m)
		{
			k--;
			p[i]=1;
			j=1;
		}
	
		if(k==0)
		{
			printf("%d\n",i+1);break;
		}
		
	}free(p);
	}
	}
return;
}
