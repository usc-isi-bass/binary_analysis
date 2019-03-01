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

void main ()
{
	char a[3000];
	int i,j=0,f,b[500]={0};
	gets(a);
	for(i=0,f=0;a[i]!='\0';i++)
	{
		if(f==0&&a[i]!=' ')
		{
			f=1;
			
		}
		if(f==1)
		{
			b[j]++;
		}
		if(f==1&&a[i]==' ')
		{
			b[j]--;
			f=0;
		    j++;
		}
	}
	if(a[i-1]==' ')
		j--;
	for(i=0;i<=j;i++)
	{
		printf("%d",b[i]);
		if(i<j)
		printf(",");
	}
}