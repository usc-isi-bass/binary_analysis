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
	char str[256],a[256],b[256],c[256];
	int i,j,t=0;
	scanf("%s %s %s",str,a,b);
	for(i=0;i<strlen(str);i++)
	{
		for(j=0;j<strlen(a);j++)
			c[j]=str[i+j];
		c[j]='\0';
	    if(strcmp(c,a)==0)
		{
			t=1;
		   break;
		}
	}
	if(t==1)
	{
	for(j=0;j<i;j++)
		printf("%c",str[j]);
	for(j=0;j<strlen(b);j++)
		printf("%c",b[j]);
	for(j=i+strlen(a);str[j]!=0;j++)
		printf("%c",str[j]);
	}
	else
		printf("%s",str);

	return 0;
}
