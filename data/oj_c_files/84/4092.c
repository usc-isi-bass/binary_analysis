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
	int n,i,m,p,j;
	scanf("%d %d",&n,&m);
	i=2;
	p=0;
	while(i<=n)
	{
		i=i+1;
		scanf("%d",&j);
		if(m<=j)
		{
			p=m;
			m=j;
		}
		else if(p<j)
		{
			m=m;
			p=j;
			
		}
	}
	printf("%d\n%d",m,p);
	return 0;
}