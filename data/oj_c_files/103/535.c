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

main ()
{
	char a[1001],b[1001];
	int c[1001];
	int m=0;
	scanf ("%s",a); 
		b[0]=a[0];
	for (int l=0;l<=1000;l++)
		{c[l]=1;
		b[l]=0;	
	}
	for (int i=0;i<=strlen(a);i++)
		{
			if (a[i]==a[i+1]||a[i]==a[i+1]+32||a[i]==a[i+1]-32)
				c[m]++;
			else 
				{b[m]=a[i];
				m++;} 
		}
	for (int k=0;k<strlen(b);k++)
	{	if (b[k]>95)
		b[k]=b[k]-32; 
		printf ("(%c,%d)",b[k],c[k]);	 
}
}