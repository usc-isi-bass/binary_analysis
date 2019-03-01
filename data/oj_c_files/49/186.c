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
	char s[500];
	unsigned int i,j,flag=0;
	char *p;
	scanf("%s",s);
	for(i=2;i<=strlen(s);i++)
	{
		for(p=s;*(p+i-1)!='\0';p++)
		{
			flag=0;
			for(j=0;j<i/2;j++)
			{
				if(*(p+j)!=*(p+i-1-j))
					flag=1;
			}
			if(flag==0)
			{
				for(j=0;j<i;j++)
					putchar(*(p+j));
				printf("\n");
			}
		}
	}
}