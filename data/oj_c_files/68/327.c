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
	int n;
	scanf ("%d",&n);
	int i,j,k;
	int w;
	for (i=6;i<=n;i=i+2)
	{
		w=0;
		for (j=3;j<n;j+=2)
		{
			for (k=2;k*k<=j;k++) 
			{
				if (j%k==0)
				{
					w=1;					
				}
			}
			if (w==0)
			{
				for (k=2;k*k<=(i-j);k++) 
				{
				    if ((i-j)%k==0)
					{
				     	w=1;				     
					}
				}
			}
			if (w==0)
			{
				printf ("%d=%d+%d\n",i,j,i-j);
			}
			if (w==0)
				break;
		w=0;
		}
	}
	return 0;
}