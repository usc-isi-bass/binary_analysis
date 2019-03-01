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
	int i,k=0,n;
	char str[2048];
	gets(str);
	n=strlen(str);
	for(i=0;i<n;i++)
		if(str[i]==' ') k++;
	if(k==0)
		printf("%d",n);
	else
	{
		k=0;
		for(i=0;i<n;i++)
		{
			if(str[i]==' ')
			{
				if(k!=0)
				{printf("%d,",k);k=0;}
				
			}
			else
					k++;
		}
		printf("%d",k);
	}
}