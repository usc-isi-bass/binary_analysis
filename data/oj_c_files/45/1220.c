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
	int i,n1,n2,e,p;
	char a[50],b[50];
	scanf("%s",a);
	scanf("%s",b);
	n1=strlen(a);
	n2=strlen(b);
	for (i=0;i<=n2-1;i++)
	{
		if (a[0]==b[i])
		{
	    	e=0;
			for (p=0;p<=n1-1;p++)
			{
				if (a[p]!=b[i+p])
				{
					e=1;
					break;
				}
			}
			if (e==0)
			{
				printf ("%d\n",i);
				break;
			}
		}
	}
}