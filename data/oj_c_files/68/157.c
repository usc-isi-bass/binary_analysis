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

int Set(int c)
{
	int i,w=1;
	if (c%2==0)
	{w=0;goto loop;}
	for (i=3;i<sqrt(c)+1;i+=2)
	{
		if (c%i==0)
		{
			w=0;
		}

	}
loop:return (w);
}
int main ()
{
	long int i=6,n,j,f;
	scanf("%d",&n);
	while (i<n+1)
	{
		for (j=3;j<i;j+=2)
		{
			if(Set(j)==1)
			{
			f=Set(i-j);
			if (f==1)
			{
				printf("%d=%d+%d\n",i,j,i-j);
				break ;
			}
			}
		}
		i+=2;
	}
	return 0;
}