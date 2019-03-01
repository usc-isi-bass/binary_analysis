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

main()
{
	int i,j,k,n,s;
	scanf("%d %d",&n,&k);
	s=1;
	for(i=1,j=1;1<=n;)
	{
		s=s*n+k;
		if(i==n)
			break;
		if(s%(n-1)==0)
		{
			s=s/(n-1);
			i++;
		}
		else
		{
			j++;
			s=j;
			i=1;
		}
	}
	printf("%d\n",s);
}
