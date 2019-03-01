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
	int i=0,n,m=0,t=0;

	do
	{
		i=i+1;
		scanf("%d",&n);
		if(n>m)
		{
		    t=m;
		    m=n;
		}
		else if(n>t&&n!=m)
			t=n;
		else if(n==m)
		    m=m;
		    t=t;
	}while(getchar()!='\n');
	if(i==1||t==0)
	{
		printf("No\n");
	}
	else
	{
		printf("%d\n",t);
	}
	
}