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
	char a[300],b[300],c[300];
	int i,j,n=0,lena,lenb;
	scanf("%s%s%s",a,b,c);
	lena=strlen(a);
	lenb=strlen(b);
	for (i=0;i<lena;i++)
	{
		if (b[0]==a[i])
		{
			for (j=0;j<lenb;j++)
			{
				if (b[j]==a[i+j])
				{
					n++;
				}
			}
		}
		if (n==lenb) break;
		else n=0;
	}
    if (i<lena)
	{
		for (j=0;j<lenb;j++)
		{
			a[i+j]=c[j];
		}
	}
	printf("%s",a);
}
