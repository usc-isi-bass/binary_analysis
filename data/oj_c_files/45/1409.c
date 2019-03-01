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

 
int main ()
{
	int l1,l2,i,j,a=0;
	char ds[100],dw[100];
	scanf ("%s %s",ds,dw);
	l1=strlen(dw);
	l2=strlen(ds);

	for (i=0;i<l1;i++)
	{
		if (dw[i]==ds[0])
		{
			for (j=0;j<l2;j++)
			{
				if (dw[i+j]==ds[j])
					a=a+1;
			}
			if (a==l2)
				printf ("%d",i);
		}
		if (a==l2)
			break;
	}
	
	return 0;
}


