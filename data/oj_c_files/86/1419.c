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
	int n,m,i,j,s[20],z[20];
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%d",&m);
		for (j=0;j<m;j++)
			scanf ("%d",&s[j]);
		if (s[m-1]+3*m<60)
		{
			z[i]=60-m*3;
		}
		else
		{
			for(j=0;j<m;j++)
			{
				if (s[j]+j*3>=57&&s[j]+j*3<=60)
				{
				    z[i]=s[j];
					break;
				}
				if (s[j]+j*3>=60)
				{
					z[i]=s[j]-(s[j]+j*3-60);
					break;
				}
			}
		}
	}
	for (i=0;i<n;i++)
		printf ("%d\n",z[i]);
	return 0;
}