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
	int a[100]={0},t=0,i,j,n;
	scanf("%d",&n);
	a[1]=1;
	for (i=1;i<=n;i++)
	{
		for (j=90;j>=1;j--)
		{
			a[j]*=2;
			a[j+1]+=a[j]/10;
			a[j]=a[j]%10;
		}
	} 
	n=99;
	while (n)
	{
		if (a[n]) t=1;
		if (t) printf("%d",a[n]);
		n--;
	}
}