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
	int i=0,c,d,j;
	scanf("%s%s",&a,&b);
	c=strlen(a);
	do
	{
		d=0;
		if(a[0]==b[i])
		{
			d=1;
			for(j=0;j<=c-1;j++)
			{
				if(a[j]!=b[i+j])
					d=0;
			}
		}
		i=i+1;
	}
	while(d==0);
	printf("%d",i-1);
}

