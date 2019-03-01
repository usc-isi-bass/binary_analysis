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
	char a[50],b[50];
	int i,t,n,c;
    scanf("%s %s",a,b);
	n=strlen(a);	
	for(i=0;;i++)
	{
		if (b[i]==a[0])
		{
			c=0;
			for(t=1;t<=n-1;t++)
			{
				if (b[i+t]==a[t])
				;
					else
				{
				c=-1;
				break;
				}
			}
			if (c==0)
			{
				printf("%d\n",i);
				break;
			}
		}
	}
}