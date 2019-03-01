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
	int m,n,k,i,j,r=1,s;
	scanf("%d%d",&n,&k);
	for(i=1;r<n;i++)
	{	for(j=i,s=(j*n+k)%(n-1),r=1;s==0&&r<n;r++)
		{	j=(j*n+k)/(n-1);
			s=(j*n+k)%(n-1);
		}
	}
	printf("%d\n",j*n+k);
}