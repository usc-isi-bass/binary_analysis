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
	int n,i,j,k,l,s,t,e;
	scanf("%d",&n);
	e=0;
	for(i=2;i<(n-1);i++)
	{
		j=i+2;
		s=0;
		t=0;
		for(k=2;k<i;k++)
		{
			if(i%k==0)
				s++;
		}
		for(l=2;l<j;l++)
		{
			if(j%l==0)
				t++;
		}
		if(s==0&&t==0)
		{	printf("%d %d\n",i,j);
		    e=e++;
		}
	}
	if(e==0)
		printf("empty");
}
