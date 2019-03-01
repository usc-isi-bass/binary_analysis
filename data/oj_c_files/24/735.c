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
	char s[1000],c[30],maxw[30],minw[30];
	int i,m=0,max=0,min=30;
	gets(s);
	for(i=0;i<strlen(s)+1;i++)
	{
		c[m]=s[i];
		m++;
		if((s[i]==' ')||(s[i]=='\0'))
		{
			c[m-1]='\0';
			if((m-1)>max)
			{
				max=m-1;
				strcpy(maxw,c);
			}
			if((m-1)<min)
			{
				min=m-1;
				strcpy(minw,c);
			}
			m=0;
		}
	}
	printf("%s\n%s",maxw,minw);
}