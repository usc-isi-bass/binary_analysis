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
	char s[500],*p1,*p2,*p;
	int i,j,n;
	gets (s);
	n=strlen(s);
	for (i=1;i<n;i++)
	{
		for (p1=s;*(p1+i)!='\0';p1++)
		{
			p2=p1+i;
			for (j=0;j<i;j++)
			{
				if (*(p1+j)!=*(p2-j)) break;
			}
			if (j==i)
			{
				for (p=p1;p<=p2;p++)
					printf("%c",*p);
				printf("\n");
			}
		}
	}
}
