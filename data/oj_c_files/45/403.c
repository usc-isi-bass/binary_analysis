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
	char a[50],b[50];
	char *pa,*pb;
	scanf("%s%s",a,b);
	for(pb=b,pa=a;pb<b+strlen(b);)
	{
		if(*pb==*pa)
		{
			for(pa=a;pa<strlen(a)+a;pa++)
			{
				if(*pa==*pb) pb++;
				else break;
			}
			if(pa=a+strlen(a)) printf("%d",pb-b-strlen(a));
			else pa=a;
		}
		else pb++;
	}
}