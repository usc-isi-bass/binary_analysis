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
	char a[1000]={'\0'};
	int i,flag=0,count=0;

	gets(a);
	i=0;

	while(a[i]!='\0' || a[i-1]!='\0')
	{
		if(a[i]!=' ' && a[i]!='\0')
		{
			count++;
		}
		
		if(count && a[i]==' ' || a[i]=='\0')
		{
			if(flag==0)
			{
				printf("%d",count);
				flag=1;
			}
			else printf(",%d",count);
			count=0;
		}
		i++;
		
		
	}
}