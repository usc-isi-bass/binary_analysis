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
	int n,a[100];
	int i;
	int f(int x,int min);          //f:???????

	for(i=0;i<100;i++)
		a[i]=0;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		a[i]=f(a[i],2);
	}

	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}


	return 0;
}

int f(int x,int min)
{
	int y=0;
	int i;

	if(x==1)
		y=1;

	else
	{
	  for(i=min;i<=x;i++)
	  {
		if(x%i==0)
		{
			y=y+f(x/i,i);
		}
	  }
	}

	return y;
}