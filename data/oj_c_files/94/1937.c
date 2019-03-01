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
	int n,i,j,e,m=0;
	int a[501];
	scanf ("%d\n",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	}
	for (i=1;i<=n;i++)
	{
		for (j=0;j<n-i;j++)
		{
			if (a[j]>a[j+1])
			{
				e=a[j+1];
				a[j+1]=a[j];
				a[j]=e;
			}
		}
	}
	for (j=0;j<n;j++)
	{
		if (a[j]%2!=0)
		{
		 if (m==0)
		 {
			 printf ("%d",a[j]);
		 }
		 else 
		 {
			 printf (",%d",a[j]);
		 }
		 m++;
		}
	}
			
	
	
	return 0;
}
