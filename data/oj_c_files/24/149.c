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
	char a[500];
	int i,j=1,b[500],c,d,e=0,f=0;
	gets(a);          /*????????*/
	b[0]=-1;
	for (i=0;a[i]!='\0';i++)
		if (a[i]==' ')
		{
			b[j]=i;
		    j++;
		}
	b[j]=i;
    c=b[1]-b[0];
	d=b[1]-b[0];
	for (i=1;i<=j;i++)
	{
		if ((b[i]-b[i-1])>c)
		{
			c=b[i]-b[i-1];
			e=i-1;
		}
		if ((b[i]-b[i-1])<d)
		{
			d=b[i]-b[i-1];
			f=i-1;
		}
	}
	for (i=(b[e]+1);i<b[e+1];i++)
		printf("%c",a[i]);
	printf("\n\n");
	for (i=(b[f]+1);i<b[f+1];i++)
		printf("%c",a[i]);
}