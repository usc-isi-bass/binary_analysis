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
	int n,x=0;
	scanf("%d ",&n);
	char c[81];
	int t,len;
	char *p;
	for(x=0;x<n;x++)
	{	
		gets(c);
		len=strlen(c);
		p=c;
		if(*p=='_'||((*p)>=65&&*p<=90)||(*p>=97&&*p<=122))
		{
			t=1;
			for(p=c+1;p<c+len;p++)
			{
				if(*p=='_'||(*p>=65&&*p<=90)||(*p>=97&&*p<=122)||(*p>=48&&*p<=57))
					t=1;
				else
				{
					t=0;
					break;
				}
			}
		}
		else
			t=0;
		if(t==1)
		printf("yes\n");
		else 
			printf("no\n");
	}
	return 0;
}