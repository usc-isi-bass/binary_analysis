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
	int k,t,n,m,i,mon[300],pri[300],h=0,*p;
	scanf("%d%d",&n,&m);
	  while(m!=0&&n!=0)
	  {
		t=0;
		k=0;
		p=mon;
		for(i=0;i<n;i++)
		{
			*(p+i)=i+1;
		}
		i=0;
		while(t<n-1)
		{
			if(*(p+i)!=0) k++;
			if(k==m)
			{
				*(p+i)=0;
				k=0;
				t++;
			}
			i++;
			if(i==n) i=0;
		}
		while(*p==0)p++;
		pri[h]=*p;
		h++;
		scanf("%d%d",&n,&m);
	}
	for(i=0;i<h;i++)
	{
		printf("%d\n",pri[i]);
	}
}