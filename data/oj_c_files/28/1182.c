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
	char str[100000];
	int n,a[300],i,j,k,l,m,len;
	n=0;
	k=0;
	for(i=0;i<=300;i++) a[i]=0;
	gets(str);
	len=strlen(str);
	for(i=0;i<=len;i++)
	{
		if (str[i]==' ')
		{
			if (k!=0) 
			{
			    n++;
			    k=0;
			}
		}
		else
		{
			a[n]++;
			k=1;
		}
	}
	if (a[n]==0) l=1;
	else l=0;
	for(i=0;i<n-l;i++) printf("%d,",a[i]);
	printf("%d",a[n-l]-1);
}
			
