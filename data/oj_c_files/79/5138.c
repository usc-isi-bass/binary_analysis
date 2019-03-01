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
	int n,m,i,s=0,count;
	for(count=0;;count++)
	{
		scanf("%d%d",&n,&m);
		if(n==0&&m==0)
			break;
		if(m==1)
			s=n-1;
		if(n==1)
			s=0;
		if(n>1)
		{
			for(i=2;i<=n;i++)
				s=(s+m)%i;
		}
		printf("%d\n",s+1);
		s=0;
	}
}
