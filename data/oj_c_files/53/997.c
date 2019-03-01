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


int isin(int *b,int chang,int value)//??????????
{
	int *p;
	for(p=b;p<b+chang;p++)
	if(*p==value)
			return 1;
	return 0;
	
}

void main()
{
	int i,a[300],b[300],n,N,q,*p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",a+i);//??????!!!
		for(p=a,N=0;p<a+n;p++)
		{
			if(q=isin(b,N,*p)==0) 
			{*(b+N)=*p;
			N++;
			}
		}
			for(p=b;p<b+N;p++)
				printf("%d%s",*p,p==b+N-1?"\n":",");
}



