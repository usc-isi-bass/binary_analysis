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

char c[10000];
void main()
{
	char a[301]={0};
	int k=0,i,r;
	gets(c);
	r=strlen(c);
	for(i=0;i<r-1;i++)
	{
		if((c[i]!=' ')&&(c[i+1]!=' '))
		{
			a[k]++;
		}
		if((c[i]!=' ')&&(c[i+1]==' '))
		{
			a[k]++;
			k++;
		}
	}
	if(c[r-1]!=' ')
	{
		a[k]++;
		k++;
	}
		for(i=0;i<k-1;i++)
			printf("%d,",a[i]);
		printf("%d\n",a[k-1]);
}



