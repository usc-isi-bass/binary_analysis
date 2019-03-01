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
	int n,a,i,j,b[20],no[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a>0) 
		{
			for(j=1;j<=a;j++) scanf("%d",&b[j]);
			for(j=0;j<a;j++)
			{
				if(b[a-j]+3*(a-j)<=62) break;
			}
			if(j==a) no[i]=60-3*a;
			else if(b[a-j]+3*(a-j)>=60) no[i]=b[a-j];
			else no[i]=60-3*(a-j);
		}
		else no[i]=60;
	}
	for(i=0;i<n;i++) printf("%d\n",no[i]);
}