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
	char a[100],*b,c=1;
	int i,j,n;
	gets(a);
	n=strlen(a);
	//printf("%d",n);
	char *p=&a[n-1],*q=&a[n-1];
	//printf("%c""%c",*p,*q);

	for(i=0;i<=n-1,a[i]!='\0';i++)
	{
		if(a[i]==' ') c=c+1;
	}
	//printf("%d",c);
	if(c!=1)
	{for(;p>=&a[0];p--)
		{
			if(*p==' ')
			{
				b=p;
				for(;p<=q;p++)
				{
				if(*p!=' ') printf("%c",*p);
				}
				printf(" ");
				p=b-1;
				q=b-1;
			}
		}
		for(p=&a[0];*p!=' ';p++)
		{
			printf("%c",*p);
		}
	}
	else puts(a);
}