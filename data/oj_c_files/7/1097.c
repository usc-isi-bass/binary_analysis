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



int main()
{
	char a[256],b[256],c[256];
	int la,lb,lc,i,j,p=0;
	scanf ("%s",a);
	scanf ("%s",b);
	scanf ("%s",c);
	la=strlen(a);
	lb=strlen(b);
	lc=strlen(c);
	for (i=0;i<la;i++)
	{
		if (b[0]==a[i])
		{
			for (j=1;j<lb;j++)
			{
				if (b[j]==a[i+j])
					p=0;
				else
					p=1;
			}
			if (p==0)
			{
				for (j=0;j<lc;j++)
					a[i+j]=c[j];
				break;
			}
		}
	}
	printf ("%s",a);
	return 0;
}