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
	int n,a,i,j,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a);
			if(a==0)
				break;
		}
		for(j++;j<n;j++)
		{
			scanf("%d",&a);
			if(a==255)
				s++;
			else
				break;
		}
		for(j++;j<n;j++)
		{
			scanf("%d",&a);
		}
	}
	printf("%d",s);
} 