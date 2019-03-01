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

int reverse (int x)
{
	int s=0,i;
	while (x!=0)
	{
		i=x%10;
		s=s*10+i;
		x=x/10;
	}
	return s;
}
main()
{
	int n=0,i,j=0;
	char a;
	for (i=0;i<6;i++)
	{    
		n=0;j=0;
		while (1)
		{
		    scanf("%c",&a);
		    if (a=='\n')
			    break;
		    if (a=='-')
			    j=1;
		    else
			    n=n*10+(a-'0');
		}
	    n=reverse(n);
	    if (j==1)
		    printf("-");
	    printf("%d\n",n);
	}
}