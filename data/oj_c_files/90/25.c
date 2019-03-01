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
	int m,n,i,j;
	int ps(m,n);
	scanf("%d",&j);
	for(i=0;i<j;i++)
	{
		scanf("%d %d",&m,&n);
	    printf("%d\n",ps(m,n));
	}
}

ps(m,n)
{
	int i,j,k;
	if(n==1)
		k=1;
	else
	{
		k=0;
		for(i=0;i<=(m/n);i++)
		{
			k=k+ps(m-i*n,n-1);
		}
	}
	return (k);
}


	
	